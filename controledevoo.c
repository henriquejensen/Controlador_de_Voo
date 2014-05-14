    // scanf("%s %s %s %s %s %s", codigo, registro.aviao.chave.codigoVoo,
    //                            registro.aviao.partida, registro.aviao.chegada,
    //                            registro.aviao.horario, registro.aviao.companhia);

    // // '\0' é um caracter especial para indicar o final da string
    // codigo[strlen(codigo)] = '\0';
    // registro.aviao.chave.codigoVoo[strlen(registro.aviao.chave.codigoVoo)] = '\0';
    // registro.aviao.partida[strlen(registro.aviao.partida)] = '\0';
    // registro.aviao.chegada[strlen(registro.aviao.chegada)] = '\0';
    // registro.aviao.horario[strlen(registro.aviao.horario)] = '\0';
    // registro.aviao.companhia[strlen(registro.aviao.companhia)] = '\0';
    // tipo = 0;

    // printf("%s %s %s %s %s %s\n", codigo, registro.aviao.chave.codigoVoo,
    //                                 registro.aviao.partida, registro.aviao.chegada,
    //                                 registro.aviao.horario, registro.aviao.companhia);

//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"

int main(int argc, char const *argv[])
{
    char entrada[200];
    char codigo[3]; //Codigo para identificar a função que sera realizada
    Registro registro;
    Apontador_No Arvore;

    inicializa(&Arvore);


    do{
        gets(entrada);
        entrada[strlen(entrada)] = '\0';
        strncpy(codigo, entrada, 2);
        codigo[2] = '\0';

        if(strcmp(codigo,"FM")==0)
        {
            //finaliza();
        }

        // ---------------------------------------------------------------
        //              tratamento para passageiros
        // ---------------------------------------------------------------

        else if(strcmp(codigo,"IV")==0)
        {
            strncpy(registro.aviao.chave.codigoVoo, entrada + 3, 15);
            registro.aviao.chave.codigoVoo[15] = '\0';
            strncpy(registro.aviao.partida, entrada + 19, 3);
            registro.aviao.partida[3] = '\0';
            strncpy(registro.aviao.chegada, entrada + 23, 3);
            registro.aviao.chegada[3] = '\0';
            strncpy(registro.aviao.horario, entrada + 27, 5);
            registro.aviao.horario[5] = '\0';
            strncpy(registro.aviao.companhia, entrada + 33, 2);
            registro.aviao.companhia[2] = '\0';

            insere(registro, &Arvore, 1);
        }
        // else if(strcmp(codigo,"BV")==0)
        // {
        //     strncpy(registro.aviao.chave.codigoVoo, entrada + 3, 15);
        //     registro.aviao.chave.codigoVoo[15] = '\0';
        //     strncpy(registro.aviao.partida, entrada + 19, 3);
        //     registro.aviao.partida[3] = '\0';

        //     busca(registro, &Arvore, 1);
        // }
        // else if(strcmp(codigo,"RV")==0)
        // {
        //     strncpy(registro.aviao.chave.codigoVoo, entrada + 3, 15);
        //     registro.aviao.chave.codigoVoo[15] = '\0';
        //     strncpy(registro.aviao.partida, entrada + 19, 3);
        //     registro.aviao.partida[3] = '\0';

        //     remove(registro, &Arvore, 1);
        // }
        // else if(strcmp(codigo,"PV")==0)
        // {
        //     strncpy(registro.aviao.chave.codigoVoo, entrada + 3, 15);
        //     registro.aviao.chave.codigoVoo[15] = '\0';

        //     imprime(registro, &Arvore, 1);
        // }

        // ---------------------------------------------------------------
        //              tratamento para passageiros
        // ---------------------------------------------------------------

        // else if(strcmp(codigo,"IP")==0)
        // {
        //     char codigoVoo[16];
        //     strncpy(codigoVoo, entrada + 3, 15);
        //     codigoVoo[15] = '\0';
        //     strncpy(registro.passageiro.chave.passaporte, entrada + 19, 11);
        //     registro.passageiro.chave.passaporte[11] = '\0';
        //     strncpy(registro.passageiro.nome, entrada + 31, strlen(entrada)-35);
        //     registro.passageiro.nome[strlen(entrada)-35] = '\0';
        //     strncpy(registro.passageiro.poltrona, entrada + strlen(entrada)-3, 3);
        //     registro.passageiro.poltrona[3] = '\0';

        //     insere(registro, &Arvore, 1);
        // printf("%s %s %s %s %s\n", codigo, codigoVoo,
        //                              registro.passageiro.chave.passaporte, registro.passageiro.nome,
        //                              registro.passageiro.poltrona);
        // }


        // else if(strcmp(codigo,"BP")==0)
        // {


        //     busca(registro, &Arvore, 1);
        // }
        // else if(strcmp(codigo,"RP")==0)
        // {


        //     remove(registro, &Arvore, 1);
        // }
        // else if(strcmp(codigo,"PP")==0)
        // {


        //     imprime(registro, &Arvore, 1);
        // }

    }while(strcmp(codigo,"FM"));



    return 0;
}
