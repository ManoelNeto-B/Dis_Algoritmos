/*Faça um programa que solicite 8 números reais ao usuário, armazene em um vetor. Em seguida calcule a média e mostre o resultado */

#include<stdio.h>

int main () {

    float caixa [8], soma = 0, media = 0;
    int i = 0;

    printf("<<INFORME OS VALORES DO VETOR>>\n");

    for ( i = 0; i < 8; i = i + 1 ){
        scanf("%f", &caixa[i]);
        soma = soma + caixa[i];
    }

    media = soma / 8;

    printf("<<MÉDIA = %f>>\n", media);
}