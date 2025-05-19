/*6. Fazer um programa que leia os valores de um vetor inteiro de tamanho 10, e
imprima o valor da soma dos números pares presentes neste vetor.*/

#include<stdio.h>

int main () {
    int i = 0, vet [10], soma = 0;

    printf(">>INFORME OS VALORES DO VETOR<<\n");
    for ( i = 0; i < 10; i = i + 1){
        scanf("%d", &vet[i]);
    }

    for ( i = 0; i < 10; i = i + 1){
        if ( vet[i] % 2 == 0){
            soma = soma + vet[i];
        }
    }

    printf(">>A SOMA TOTAL DOS VALORES E: %d <<", soma);

    return(0);
}