#include "../home/includes.h"

void modulo_professor(void){
	char op;
	do {
		op = menu_professor();
		switch(op) {
			case '1': 	cadastrar_professor();
						break;
			case '2': 	pesquisar_professor();
						break;
			case '3': 	atualizar_professor();
						break;
			case '4': 	excluir_professor();
						break;
		} 		
	} while (op != '0');
}

char menu_professor(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                     - - - - Menu Professor - - - -                      ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Cadastrar Professor                                         ***\n");
  printf("***         2 - Pesquisar Professor                                         ***\n");
  printf("***         3 - Atualizar Professor                                         ***\n");
  printf("***         4 - Excluir Professor                                           ***\n");
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

void cadastrar_professor(void){
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

void pesquisar_professor(void){
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

void atualizar_professor(void){
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

void excluir_professor(void){
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