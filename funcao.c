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
    char* chaveRegistro; //o tipo é utilizado para diferenciar aviao (tipo 1) de passageiro (tipo 0)

    if(tipo)
    {
        chaveArvore = (*pArvore)->reg.aviao.chave.codigoVoo;
        chaveRegistro = info.aviao.chave.codigoVoo;
    }

    else
    {
        chaveArvore = (*pArvore)->reg.passageiro.chave.passaporte;
        chaveRegistro = info.passageiro.chave.passaporte;
    }

    if(*pArvore == NULL)
    {
        (*pArvore) = (No *) malloc ( sizeof (No));

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
*/
void remover(Registro info, No **pArvore, int tipo)
{
    char* chaveArvore;
    char* chaveRegistro;

    if(tipo==1)
    {
        chaveArvore = (*pArvore)->reg.aviao.chave.codigoVoo;
        chaveRegistro = info.aviao.chave.codigoVoo;
    }

    else
    {
        chaveArvore = (*pArvore)->reg.passageiro.chave.passaporte;
        chaveRegistro = info.passageiro.chave.passaporte;
    }
    No *aux;

    if(*pArvore == NULL)
    {
        printf("ERRO\n");
    }
    else if(strcmp(chaveRegistro, chaveArvore) > 0)
        remover(info, &(*pArvore)->dir, tipo);
    else if(strcmp(chaveRegistro, chaveArvore) < 0)
        remover(info, &(*pArvore)->esq, tipo);

    else
    {
        if((*pArvore)->esq == NULL && (*pArvore)->dir == NULL)
        {
            free(*pArvore);
            *pArvore = NULL;
            printf("SUCESSO\n");
        }
        else if((*pArvore)->esq == NULL)
        {
            aux = *pArvore;
            *pArvore = (*pArvore)->dir;
            free(aux);
        }
        else if((*pArvore)->dir == NULL)
        {
            aux = *pArvore;
            *pArvore = (*pArvore)->esq;
            free(aux);
        }
        // else
        // {
        //     chaveArvore = busca_maior((*pArvore->esq));
        //     remover(info, &(*pArvore)->dir, tipo);
        // }
    }
}
/*
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
