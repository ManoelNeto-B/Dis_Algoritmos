/*12. Crie um programa que leia uma matriz 3x3 e calcule a média dos seus elementos,
exibindo o resultado.*/

#include<stdio.h>

int main () {

    float mat[3][3], soma = 0, media = 0;
    int i = 0, j = 0;

    printf(">>INFORME OS VALORES DA MATRIZ<<\n");
    for ( i = 0; i < 3; i = i + 1){
        for (j = 0; j < 3; j = j + 1){
            scanf("%f", &mat[i][j]);
        }
    }

    for ( i = 0; i < 3; i = i + 1){
        for ( j = 0; j < 3; j = j + 1){
            soma = soma + mat[i][j];
        }
    }

    media = soma/9;

    printf(">>A MEDIA DOS VALORES INFORMADO É : %.1f <<", media);

    return(0);

}