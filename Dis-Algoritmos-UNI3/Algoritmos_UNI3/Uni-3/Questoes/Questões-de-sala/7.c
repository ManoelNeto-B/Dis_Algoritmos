/*faça um programa que peça para o usuário inserir 5 valores em um vetor e copie esse números para outro vetor, mostrando esse novo vetor*/

#include<stdio.h>

int main () {
    float caixa[5], caixa2[5];
    int  i = 0;

    printf(">>INFORME OS VALORES DO PRIMEIRO VETOR<<\n");
    for(  i = 0; i < 5; i = i + 1 ){
        scanf("%f", &caixa[i]);
        caixa2[i] = caixa[i];
    } 

    printf(">>VALORES DO SEGUNDO VETOR<<\n");
    for( i = 0; i < 5; i = i + 1 ){
        printf("%.0f", caixa2[i]);
    }

    return(0);
}
