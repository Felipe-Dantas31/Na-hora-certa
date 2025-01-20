#include "../home/includes.h"

void modulo_aluno(void) {
	char op;
	do {
		op = menu_aluno();
		switch(op) {
			case '1': 	cadastrar_aluno();
						break;
			case '2': 	pesquisar_aluno();
						break;
			case '3': 	atualizar_aluno();
						break;
			case '4': 	excluir_aluno();
						break;
		} 		
	} while (op != '0');
}

char menu_aluno(void){


  char op;
  cabecalho_principal();

  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                     - - - - Menu Aluno - - - -                          ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Cadastrar Aluno                                             ***\n");
  printf("***         2 - Pesquisar Aluno                                             ***\n");
  printf("***         3 - Atualizar Aluno                                             ***\n");
  printf("***         4 - Excluir Aluno                                               ***\n");
  printf("***         0 - Sair                                                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Escolha a opcao desejada...                                     ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  scanf("%c", &op);
  getchar();
  return op;
}

void ler_nome(Aluno* aluno) {
    do {
        printf("\nDigite o Nome (somente letras e espaços): ");
        fgets(aluno->nome, 50, stdin);
        aluno->nome[strcspn(aluno->nome, "\n")] = '\0';  
    } while (!verificarnome(aluno->nome));  
}

void ler_email(Aluno* aluno) {
    do {
        printf("\nDigite o Email (formato correto: exemplo@dominio.com): ");
        fgets(aluno->email, 50, stdin);
        aluno->email[strcspn(aluno->email, "\n")] = '\0';  
    } while (!verificaremail(aluno->email));  
}

void ler_cpf(Aluno* aluno) {
    do {
        printf("\nDigite o CPF (apenas números): ");
        fgets(aluno->cpf, 15, stdin);
        aluno->cpf[strcspn(aluno->cpf, "\n")] = '\0';  
    } while (!verificarCPF(aluno->cpf));  
}

void ler_telefone(Aluno* aluno) {
    do {
        printf("\nDigite o Telefone (apenas números, 10 ou 11 dígitos): ");
        fgets(aluno->fone, 15, stdin);  
        aluno->fone[strcspn(aluno->fone, "\n")] = '\0';
    } while (!verificarfone(aluno->fone)); 
}

void ler_status(Aluno* aluno) {
  do {
    printf("\nDigite o status (0 ou 1): ");
    scanf(" %c", &aluno->status);  
  } while (aluno->status != '0' && aluno->status != '1');  
}

void cadastrar_aluno(void){
  
  cabecalho_principal();
  Aluno* aluno;
  aluno = (Aluno*) malloc(sizeof(Aluno));
  FILE* fp;
  fp = fopen("aluno.dat", "ab");

  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Cadastrar Aluno - - - -                        ***\n");
  printf("***                                                                         ***\n");
  
  do{
    ler_cpf(aluno);
  } while (cpf_ja_cadastrado(aluno->cpf, "aluno.dat", aluno, sizeof(Aluno), offsetof(Aluno, cpf)));

  ler_nome(aluno); 

  ler_email(aluno);   
    
  ler_telefone(aluno); 

  ler_status(aluno);

  fwrite(aluno, sizeof(Aluno), 1, fp);
  fclose(fp);
  free(aluno);

  printf("\nAluno cadastrado com sucesso!\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
  

}

void exibe_aluno(Aluno* aluno){

  printf("\nAluno encontrado!\n");
  printf("CPF: %s\n", aluno->cpf);
  printf("Nome: %s\n", aluno->nome);
  printf("E-mail: %s\n", aluno->email);
  printf("Telefone: %s\n", aluno->fone);
  printf("Status: %c\n", aluno->status);
}

Aluno* buscar_aluno(){

  char* cpf;
  cpf = (char*) malloc(15*sizeof(char));
  Aluno* aluno;
  aluno = (Aluno*) malloc(sizeof(Aluno));
  FILE* fp;
  fp = fopen("aluno.dat", "rb");

  if(fp == NULL){
      printf("Arquivo não encontrado!");
      free(cpf);
      fclose(fp);
      return NULL;

  }else{

    do{
      printf("\nDigite o CPF : ");
      fgets(cpf, 15, stdin);
      cpf[strcspn(cpf, "\n")] = '\0'; 
    }while(!verificarCPF(cpf));

    while(fread(aluno, sizeof(aluno), 1, fp)){
      if ((strcmp(aluno->cpf, cpf) == 0)){
          exibe_aluno(aluno);
          free(cpf);
          fclose(fp);
          return aluno;
      }
    }
  }

  printf("\nAluno com CPF %s não encontrado!\n", cpf);
  free(cpf);
  fclose(fp);
  free(aluno);
  return NULL;
}

void pesquisar_aluno(void){

  cabecalho_principal();

  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Pesquisar Aluno - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf(">>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void atualizar_aluno(void){

  cabecalho_principal();
  FILE* fp;
  fp = fopen("aluno.dat", "rb");
  char op;  
    
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Atualizar Dados do Aluno - - - -              ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");

  if (fp == NULL) {
    printf("Erro ao abrir os arquivos!\n");
    fclose(fp);
    return;
  }

  Aluno* aluno = buscar_aluno();
  if (aluno == NULL) {
    fclose(fp);
    return; 
  }
  do {
    op = tela_alterar_dado();
		switch(op) {
			case '1': 
        ler_nome(aluno);
        break;
			case '2':
        ler_email(aluno); 	
				break;
			case '3': 	
        ler_telefone(aluno);
				break;
			case '4': 
        ler_status(aluno);	
				break;
		} 	
    if (op != '0') {
      fseek(fp, -sizeof(Aluno), SEEK_CUR);  
      fwrite(aluno, sizeof(Aluno), 1, fp);  
    }

	} while (op != '0');
  
  fclose(fp);

  printf("\nDados atualizados com sucesso!\n");
  printf("\n>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void excluir_aluno(void){
  cabecalho_principal();
  FILE *fp;
  FILE *temp;
  int encontrou = 0;
  char confirmacao;

  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                   - - - - Excluir Aluno - - - -                         ***\n");
  printf("***                                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");

  fp = fopen("aluno.dat", "rb");
  if (fp == NULL) {
    printf("Erro ao abrir o arquivo de alunos!\n");
    return;
  }

  temp = fopen("temp.dat", "wb");
  if (temp == NULL) {
    printf("Erro ao criar arquivo temporário!\n");
    fclose(fp);
    return;
  }

  Aluno* aln = buscar_aluno();
  Aluno* aluno = (Aluno *)malloc(sizeof(Aluno));

  if (aluno == NULL) {
    fclose(fp);
    return; 
  }

  while(fread(aluno, sizeof(Aluno), 1, fp)) {
    if(strcmp(aluno->cpf, aln->cpf) == 0) {
      encontrou = 1;
      printf("\nAluno com CPF %s foi encontrado.\n", aluno->cpf);
      printf("\nTem certeza que deseja excluir este aluno? (s/n): ");
      scanf(" %c", &confirmacao);  
      getchar();

      if(confirmacao == 's' || confirmacao == 'S') {
        printf("\nAluno com CPF %s foi excluído.\n", aluno->cpf);
      }else{
        printf("\nExclusão cancelada.\n");
        fwrite(aluno, sizeof(Aluno), 1, temp);
      }
    }else{
      fwrite(aluno, sizeof(Aluno), 1, temp);
    }
  }

  free(aluno);
  fclose(fp);
  fclose(temp);

  if (encontrou) {
    remove("aluno.dat");
    rename("temp.dat", "aluno.dat");
  } else {
    remove("temp.dat");
    printf("\nAluno não encontrado para exclusão.\n");
  }

  printf("\n>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
