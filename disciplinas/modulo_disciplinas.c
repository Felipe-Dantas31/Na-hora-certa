#include "../home/includes.h"

void modulo_disciplina(void){
	char op;
	do {
		op = menu_disciplina();
		switch(op) {
			case '1': 	cadastrar_disciplina();
						break;
			case '2': 	pesquisar_disciplina();
						break;
			case '3': 	atualizar_disciplina();
						break;
			case '4': 	excluir_disciplina();
						break;
		} 		
	} while (op != '0');
}
char menu_disciplina(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                   - - - - Menu Disciplina - - - -                       ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Cadastrar Disciplina                                        ***\n");
  printf("***         2 - Pesquisar Disciplina                                        ***\n");
  printf("***         3 - Atualizar Disciplina                                        ***\n");
  printf("***         4 - Excluir Disciplina                                          ***\n");
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

void cadastrar_disciplina(void){
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

void pesquisar_disciplina(void){
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

void atualizar_disciplina(void){
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

void excluir_disciplina(void){
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