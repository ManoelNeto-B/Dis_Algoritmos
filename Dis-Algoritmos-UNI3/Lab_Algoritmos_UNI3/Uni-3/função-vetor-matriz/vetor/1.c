/*1. Escreva um programa que solicita e armazena oito valores inteiros em um vetor,
denominado de vet, e exibe os valores armazenados, porém na ordem inversa.*/

#include<stdio.h>

int main () {
    int vet[8], i = 0;

    printf(">>INFORME OS VALORES DO VETOR<<\n");
    for ( i = 0; i < 8; i++){
    scanf("%d", &vet[i]);
    }

    for ( i = 7; i >= 0; i--){
        printf("%d\n", vet[i]);
    }

    return(0);
    
}