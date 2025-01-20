#include "includes.h"

int main(void){
	char opcao;
	do {
		opcao = tela_menu_principal();
		switch(opcao) {
			case '1': 	modulo_professor();
						break;
			case '2': 	modulo_aluno();
						break;
			case '3': 	modulo_disciplina();
						break;
			//case '4': 	modulo_relatorios();
				//		break;
			//case '5': 	modulo_informacoes();
				//		break;
		} 		
	} while (opcao != '0');
	return 0;    
}
