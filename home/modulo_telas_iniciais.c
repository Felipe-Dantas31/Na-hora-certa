#include <stdio.h>

void cabecalho_principal(void){
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***               Universidade Federal do Rio Grande do Norte               ***\n");
  printf("***                   Centro de Ensino Superior do Serido                   ***\n");
  printf("***                 Departamento de Computacao e Tecnologia                 ***\n");
  printf("***                    Disciplina DCT1106 -- Programacao                    ***\n");
  printf("***          Sistema Gerenciador de Horários de Aula - Na Hora Certa        ***\n");
  printf("***           Developed by @expeditofranca -- since September, 2024         ***\n");
  printf("***           Developed by @HumanoGeovs -- since September, 2024            ***\n");
  printf("***                                                                         ***\n");
  printf("***                       Bem-vindo ao nosso sistema!                       ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
}

void cabecalho_secundario(void){
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***      - - - - Sitema Gerenciador de Horários - Na Hora Certa - - - -     ***\n");
  printf("***                                                                         ***\n");
  printf("***          Developed by @expeditofranca -- since September, 2024          ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
}


char tela_menu_principal(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***      - - - - Sitema Gerenciador de Horários - Na Hora Certa - - - -     ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Modulo Professor                                            ***\n");
  printf("***         2 - Modulo Aluno                                                ***\n");
  printf("***         3 - Modulo Salas                                                ***\n");
  printf("***         4 - Modulo Disciplinas                                          ***\n");
  printf("***         5 - Sobre o Projeto                                             ***\n");
  printf("***         6 - Sobre a Equipe                                              ***\n");
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

void tela_sobre(void) {
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***      Problemas com locais e horários de aula? Chegou Na Hora Certa!     ***\n");
  printf("***                                                                         ***\n");
  printf("***      Desenvolvido para disciplina DCT1106 - Programacao do Bacharelado  ***\n");
  printf("***     em  Sistemas de Informacao da UFRN - CERES Caico, Na Hora Certa  é  ***\n");
  printf("***     um projeto de  cunho academico avaliativo  desenvolvido em C  tem   ***\n");
  printf("***     como objetivo auxiliar alunos e professores a gerir seus locais e   ***\n");
  printf("***     horários de aulas, informando onde e quando ocorrerão as aulas, e   ***\n");
  printf("***     informando também possíveis e eventuais mudanças de horários, lo-   ***\n");
  printf("***     -cais e cancelamentos de aula.     ***\n");
  printf("***      Ademais, o projeto serve como um meio de consolidar o que foi      ***\n");
  printf("***     aprendido sobre a linguagem C, bem como a capacidade de resolver    ***\n");
  printf("***     problemas e utilizacao de logica de programacao em um contexto      ***\n");
  printf("***     real, assim servindo tambem como uma preparacao para o mercado      ***\n");
  printf("***     de trabalho.                                                        ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_equipe(void) {
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***      - - - - Sitema Gerenciador de Horários - Na Hora Certa - - - -     ***\n");
  printf("***                                                                         ***\n");
  printf("***                           Desenvolvido por:                             ***\n");
  printf("***                                                                         ***\n");
  printf("***          Expedito Luiz de França Neto                                   ***\n");
  printf("***          E-mail: francaexpedito11@gmail.com                             ***\n");
  printf("***          Redes Sociais: @expeditofranca (Git)                           ***\n");
  printf("***          Repositorio: https://github.com/expeditofranca/Na_Hora-Certa   ***\n");
  printf("***                                                                         ***\n");
  printf("***          Marco Geovane Araújo                                           ***\n");
  printf("***          E-mail: shinytopazio@gmail.com                                 ***\n");
  printf("***          Redes Sociais: @HumanoGeovs (Git)                              ***\n");
  printf("***          Repositorio: https://github.com/HumanoGeovs/Na_Hora-Certa      ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void msg_escolha_invalida(void){
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                            Escolha invalida!                            ***\n");
}

void msg_deu_certo(void){
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("***                       Acao realizada com sucesso!                       ***\n");
}

void tela_login(void){
  printf("*******************************************************************************\n");
  printf("***                       - - - - Login - - - -                             ***\n");
  printf("***                                                                         ***\n");
  printf("***                           Digite a senha:                               ***\n");
  printf("*******************************************************************************\n");
}