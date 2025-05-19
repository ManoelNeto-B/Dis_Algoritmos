/*4. Escreva um programa que solicita e armazena dez números inteiros em um vetor e,
ao final, informa o maior valor encontrado no vetor.*/

#include<stdio.h>

int main () {
    int vet[10], i = 0, maior = -100000;

    printf(">>INFORME OS VALORES DO VETOR<<\n");
    for ( i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
        if ( vet[i] > maior){
            maior = vet[i];
        }
    }

    printf(">>O MAIOR VALOR DIGITADO FOI : %d <<\n", maior);

    return(0);
}