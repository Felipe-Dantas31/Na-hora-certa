void modulo_aluno(void);
char menu_aluno(void);
void cadastrar_aluno(void);
void pesquisar_aluno(void);
void atualizar_aluno(void);
void excluir_aluno(void);


typedef struct aluno Aluno;

struct aluno
{
char  cpf[15], nome[50], email[50], fone[19], status;
};

void exibe_aluno(Aluno* aluno);
Aluno* buscar_aluno (void);