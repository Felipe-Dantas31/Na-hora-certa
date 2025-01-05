#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../home/modulo_telas_iniciais.h"
#include "modulo_aluno.h"

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
  char nome[42];
  char email[42];
  char cpf[13];
  char tel[13];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Cadastrar Aluno - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Nome:                                                           ***\n");
  scanf("%s", nome);
  getchar();
  printf("***         E-mail:                                                         ***\n");
  scanf("%s", email);
  getchar();
  printf("***         CPF:                                                            ***\n");
  scanf("%s", cpf);
  getchar();
  printf("***         Telefone:                                                       ***\n");
  scanf("%s", tel);
  getchar();
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_pesquisar_aluno(void){
  char cpf[13];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Pesquisar Aluno - - - -                        ***\n");
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

void tela_atualizar_aluno(void){
  char cpf[13];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Atualizar Aluno - - - -                        ***\n");
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