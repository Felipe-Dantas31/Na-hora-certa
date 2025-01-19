char tela_menu_aluno(void);
void tela_cadastrar_aluno(void);
void tela_pesquisar_aluno(void);
void tela_atualizar_aluno(void);
void tela_excluir_aluno(void);
void exibe_aluno(Aluno* aluno);

typedef struct aluno Aluno;

struct aluno
{
char nome[50], email[50], cpf[15], fone[19], status;
};