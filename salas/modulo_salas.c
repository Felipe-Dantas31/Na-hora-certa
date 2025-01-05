#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../home/modulo_telas_iniciais.h"
#include "modulo_salas.h"

char tela_menu_salas(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                     - - - - Menu Salas - - - -                          ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Cadastrar Sala                                             ***\n");
  printf("***         2 - Excluir Sala                                               ***\n");
  printf("***         3 - Pesquisar Sala                                             ***\n");
  printf("***         4 - Atualizar Sala                                             ***\n");
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

void tela_cadastrar_salas(void){
  char s_bloco[3];
  char s_num[4];
  char s_cod[5];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Cadastrar Salas - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Bloco:                                                           ***\n");
  scanf("%s", s_bloco);
  printf("***         Número:                                                         ***\n");
  scanf("%s", s_num);
  printf("***         Código:                                                            ***\n");
  scanf("%s", s_cod);
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_pesquisar_salas(void){
  char s_cod[5];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Pesquisar Salas - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Código da sala:                                                 ***\n");
  scanf("%s", s_cod);
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_atualizar_salas(void){
  char s_cod[5];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Atualizar Salas - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Código da sala:                                                 ***\n");
  scanf("%s", s_cod); 
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_excluir_salas(void){
 char s_cod[5];

  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                   - - - - Excluir Salas - - - -                         ***\n");
  printf("***                                                                         ***\n");
  printf("***         Código da sala:                                                 ***\n");
  scanf("%s", s_cod); 
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}