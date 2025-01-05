#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../home/modulo_telas_iniciais.h"
#include "modulo_professor.h"

char tela_menu_professor(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                     - - - - Menu Professor - - - -                      ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Cadastrar Professor                                         ***\n");
  printf("***         2 - Excluir Professor                                           ***\n");
  printf("***         3 - Pesquisar Professor                                         ***\n");
  printf("***         4 - Atualizar Professor                                         ***\n");
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

void tela_cadastrar_professor(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Cadastrar Professor - - - -                    ***\n");
  printf("***                                                                         ***\n");
  printf("***         Nome:                                                           ***\n");
  printf("***         E-mail:                                                         ***\n");
  printf("***         CPF:                                                            ***\n");
  printf("***         Telefone:                                                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_pesquisar_professor(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Pesquisar Professor - - - -                    ***\n");
  printf("***                                                                         ***\n");
  printf("***         CPF:                                                            ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_atualizar_professor(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Atualizar Professor - - - -                    ***\n");
  printf("***                                                                         ***\n");
  printf("***         CPF:                                                            ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_excluir_professor(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                   - - - - Excluir Professor - - - -                     ***\n");
  printf("***                                                                         ***\n");
  printf("***         CPF:                                                            ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}