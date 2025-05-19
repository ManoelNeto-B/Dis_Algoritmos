/*2. Crie um programa que solicita e armazena o nome completo de um usuário em um
vetor, e informa a quantidade de caracteres que foi inserida.
Obs.: considere o ‘\0’ na contagem e não utilize a função strlen.*/

#include<stdio.h>

int main () {
    char vet [50];
    int i = 0, qdc = 0;

    printf(">>INFORME SEU NOME<<\n");
    gets(vet);

    for ( i = 0; vet[i] != '\0' ; i++){
            qdc = qdc + 1;
    }

    qdc = qdc + 1;

    printf(">>A QUANTIDADE DE CARACTERIS FOI : %d <<", qdc);

    return(0);
}