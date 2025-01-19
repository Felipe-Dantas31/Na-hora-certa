#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../home/modulo_telas_iniciais.h"
#include "modulo_aluno.h"
#include "funcoes.h"

char tela_menu_aluno(void){
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

void tela_cadastrar_aluno(void){
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

void tela_pesquisar_aluno(void){
  cabecalho_principal();
  char* cpf;
  cpf = (char*) malloc(15*sizeof(char));
  Aluno* aluno;
  aluno = (Aluno*) malloc(sizeof(Aluno));
  FILE* fp;
  fp = fopen("aluno.dat", "rb");

  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Pesquisar Aluno - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
   if(fp == NULL){
      printf("Arquivo não encontrado!");
    
    }else{

      do{
        printf("\nDigite o CPF : ");
        fgets(cpf, 15, stdin);
        cpf[strcspn(cpf, "\n")] = '\0'; 
      }while(!verificarCPF(cpf));

      while(fread(aluno, sizeof(aluno), 1, fp)) {
        if ((strcmp(aluno->cpf, cpf) == 0)){
          exibe_aluno(aluno);
        }
      }
    }
    fclose(fp);
    free(aluno);
    free(cpf);

    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_atualizar_aluno(void){
  ccabecalho_principal();
    char* cpf;
    cpf = (char*) malloc(15 * sizeof(char));
    Aluno* aluno;
    aluno = (Aluno*) malloc(sizeof(Aluno));

    FILE* fp;
    FILE* temp;
    fp = fopen("aluno.dat", "rb");
    temp = fopen("temp.dat", "wb"); 

    if (fp == NULL || temp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
    } else {
        printf("*******************************************************************************\n");
        printf("***                                                                         ***\n");
        printf("***                  - - - - Atualizar Dados do Aluno - - - -              ***\n");
        printf("***                                                                         ***\n");
        printf("*******************************************************************************\n");

        do {
            printf("\nDigite o CPF do aluno que deseja atualizar: ");
            fgets(cpf, 15, stdin);
            cpf[strcspn(cpf, "\n")] = '\0'; 
        } while (!verificarCPF(cpf));

        int encontrado = 0;
        while (fread(aluno, sizeof(Aluno), 1, fp)) {
            if (strcmp(aluno->cpf, cpf) == 0) {
                encontrado = 1;
 
                printf("\nDigite os novos dados do aluno:\n");
                printf("Novo nome: ");
                fgets(aluno->nome, sizeof(aluno->nome), stdin);
                aluno->nome[strcspn(aluno->nome, "\n")] = '\0';

                printf("Novo e-mail: ");
                fgets(aluno->email, sizeof(aluno->email), stdin);
                aluno->email[strcspn(aluno->email, "\n")] = '\0';

                printf("Novo telefone: ");
                fgets(aluno->fone, sizeof(aluno->fone), stdin);
                aluno->fone[strcspn(aluno->fone, "\n")] = '\0';

                printf("Novo status (A - ativo, I - inativo): ");
                scanf(" %c", &aluno->status);
                getchar(); 
            }
            
            fwrite(aluno, sizeof(Aluno), 1, temp);
        }

        if (!encontrado) {
            printf("\nAluno com CPF %s não encontrado!\n", cpf);
        } else {
            printf("\nDados atualizados com sucesso!\n");
        }
    }

    
    fclose(fp);
    fclose(temp);

    remove("aluno.dat");
    rename("temp.dat", "aluno.dat");

    free(aluno);
    free(cpf);

    printf("\n>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_excluir_aluno(void){
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