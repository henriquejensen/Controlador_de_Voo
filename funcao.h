typedef union TipoChave{
    char codigoVoo[16];
    char passaporte[11];
}TipoChave;

typedef struct Passageiro
{
    TipoChave chave;
    char nome[101];
    char poltrona[4];
}Passageiro;


typedef struct Aviao
{
    TipoChave chave;
    char partida[4];
    char chegada[4];
    char horario[6];
    char companhia[3];
}Aviao;

typedef struct No *Apontador_No;

typedef union Registro{
    Passageiro passageiro;
    Aviao aviao;
}Registro;

typedef struct No
{
    Registro reg;
    Apontador_No esq;
    Apontador_No dir;
}No;

void inicializa(Apontador_No *p);

void insere(Registro info, No **pArvore, int tipo);

//void busca();

//void remove();

//void imprimePreOrdem();

//void imprimePreOrdem();

//void finaliza();
