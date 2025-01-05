#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../home/modulo_telas_iniciais.h"
#include "modulo_disciplinas.h"

char tela_menu_disciplina(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                   - - - - Menu Disciplina - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Cadastrar Disciplina                                        ***\n");
  printf("***         2 - Excluir Disciplina                                          ***\n");
  printf("***         3 - Pesquisar Disciplina                                        ***\n");
  printf("***         4 - Atualizar Disciplina                                        ***\n");
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

void tela_cadastrar_disciplina(void){
  char nome[40];
  char dep[5];
  char cod[9];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                - - - - Cadastrar Disciplina - - - -                     ***\n");
  printf("***                                                                         ***\n");
  printf("***         Nome:                                                           ***\n");
  printf("***         Departamento:                                                   ***\n");
  printf("***         Código:                                                            ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_pesquisar_disciplina(void){
  char cod[9];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                - - - - Pesquisar Disciplina - - - -                     ***\n");
  printf("***                                                                         ***\n");
  printf("***         Código:                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_atualizar_disciplina(void){
  char cod[9];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                - - - - Atualizar Disciplina - - - -                     ***\n");
  printf("***                                                                         ***\n");
  printf("***         Código:                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_excluir_disciplina(void){
  char cod[9];
  
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                 - - - - Excluir Disciplina - - - -                      ***\n");
  printf("***                                                                         ***\n");
  printf("***         Código:                                                         ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}