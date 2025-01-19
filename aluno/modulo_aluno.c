#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../home/modulo_telas_iniciais.h"
#include "modulo_aluno.h"
#include "funcoes.h"

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
  printf("***         2 - Excluir Aluno                                               ***\n");
  printf("***         3 - Pesquisar Aluno                                             ***\n");
  printf("***         4 - Atualizar Aluno                                             ***\n");
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
    printf("\nDigite o Nome: ");
    fgets(aluno->nome, 50, stdin);
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0';
 }while(!verificarnome(aluno->nome));
  
 
  do{
    printf("\nDigite o Email: ");
    fgets(aluno->email, 50, stdin);
    aluno->email[strcspn(aluno->email, "\n")] = '\0';
  }while(!verificaremail(aluno->email));
  
 
  do{
    printf("\nDigite o CPF : ");
    fgets(aluno->cpf, 15, stdin);
    aluno->cpf[strcspn(aluno->cpf, "\n")] = '\0'; 
  }while(!verificarCPF(aluno->cpf));
  
  do{
    printf("\nDigite o Telefone: ");
    fgets(aluno->fone, 15, stdin);
    aluno->fone[strcspn(aluno->fone, "\n")] = '\0';
  }while(!verificarfone(aluno->fone));
  
  aluno->status = '1';

  fwrite(aluno, sizeof(Aluno), 1, fp);
  fclose(fp);
  free(aluno);

  printf("\nCliente cadastrado com sucesso!\n");
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
  FILE* temp;
  temp = fopen("temp.dat", "wb"); 
  char op;

  if (fp == NULL || temp == NULL) {
    printf("Erro ao abrir os arquivos!\n");
    if (fp) fclose(fp);
    if (temp) fclose(temp);
    return;
  }  
    
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Atualizar Dados do Aluno - - - -              ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");

  Aluno* aluno = buscar_aluno();
  if (aluno == NULL) {
    fclose(fp);
    fclose(temp);
    remove("temp.dat");
    return; 
  }
    



  
  fclose(fp);
  fclose(temp);

  remove("aluno.dat");
  rename("temp.dat", "aluno.dat");

  printf("\n>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void excluir_aluno(void){
  char cpf[13];
  
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                   - - - - Excluir Aluno - - - -                         ***\n");
  printf("***                                                                         ***\n");
  printf("***         CPF:                                                            ***\n");
  scanf("%s", cpf);
  getchar();
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}