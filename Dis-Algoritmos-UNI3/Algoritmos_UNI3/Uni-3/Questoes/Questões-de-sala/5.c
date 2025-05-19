/*faça um programa que peça ao usuário para inserir 6 elementos em um vetor. O programa deverá mostrar o maior e o menor valor*/

#include<stdio.h>

int main () {
    int caixa [6], i = 0, maior = -100000, menor = 100000;

    printf("<<INFORME OS VALORES DO VETOR>>\n");
    for ( i = 0; i < 6; i = i + 1 ){
        scanf("%d", &caixa[i]);

        if ( caixa [ i ] > maior ){
            maior = caixa [ i ];
        }

        if ( caixa [ i ] < menor ){
            menor = caixa [ i ];
        }

    }

    printf("<<MAIOR VALOR INFORMADO : %d >>\n", maior);
    printf("<<MENOR VALOR INFORMADO : %d >>\n", menor);

    return(0);
}