/*1. Escreva um programa que solicita e armazena oito valores inteiros em um vetor,
denominado de vet, e exibe os valores armazenados, porém na ordem inversa.*/

#include<stdio.h>

int main () {
    int vet [8], i = 0;

    for ( i = 0; i < 8; i = i + 1 ){
        printf(">>INFORME O %dº VALOR DO VETOR<<\n", i);
        scanf("%d", &vet[i]);
    }

        printf(">>VALORES DO VETOR EM ORDEM INVERSA<<\n");
    for ( i = 7; i >= 0; i = i - 1 ){
        printf("%d ", vet[i]);
    }

    return(0);
}