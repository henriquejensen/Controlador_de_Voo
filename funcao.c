#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"

void inicializa(Apontador_No *p)
{
    *p = NULL;
}

void insere(Registro info, No **pArvore, int tipo)
{
    char* chaveArvore;
    char* chaveRegistro;

    if(tipo)
    {
        chaveArvore = (*pArvore)->reg.passageiro.chave.passaporte;
        chaveRegistro = info.passageiro.chave.passaporte;
    }

    else
    {
        chaveArvore = (*pArvore)->reg.aviao.chave.codigoVoo;
        chaveRegistro = info.aviao.chave.codigoVoo;
    }

    if(*pArvore == NULL)
    {
        (*pArvore) = (No *) malloc ( sizeof (No));

        if(tipo)
            (*pArvore)->reg.aviao = info.aviao;

        else
            (*pArvore)->reg.passageiro = info.passageiro;

        (*pArvore)->esq = NULL;
        (*pArvore)->dir = NULL;

        printf("SUCESSO\n");
    }

    else if (strcmp(chaveRegistro, chaveArvore) < 0)
    {
        insere(info, &(*pArvore)->esq, tipo);
    }

    else if (strcmp(chaveRegistro, chaveArvore) > 0)
    {
        insere(info, &(*pArvore)->dir, tipo);
    }

    else
        printf("ERRO\n");
}

/*
void busca()
{

}

void remove()
{
    printf("SUCESSO\n");

    printf("ERRO\n");
}

void imprimePreOrdem()
{

}

void imprimePosOrdem()
{

}

void finaliza()
{

}
*/
