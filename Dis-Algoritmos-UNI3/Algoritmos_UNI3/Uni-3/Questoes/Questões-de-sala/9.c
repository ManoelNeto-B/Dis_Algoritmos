/*<<MATRIZ>> faça um programa em C que utiliza uma matriz 3x3. O programa deverá pedir os valores ao usuário e em seguida imprimir na tela o que foi digitado*/
#include<stdio.h>

int main () {
    int mat [3] [3], i = 0, j = 0;

    printf("<<INFORME OS VALORES DA MATRIZ>>\n");
    for (i = 0; i < 3; i = i + 1){
        for (j = 0; j < 3; j = j + 1){
            scanf("%d", &mat[i] [j]);
        }
    }

    printf("<<OS VALORES ARMAZENADOS NA MATRIZ FORAM>>\n");
    for (i = 0; i < 3; i = i + 1){
        for (j = 0; j < 3; j = j + 1){
            printf("[%d] ", mat[i] [j]);
        }
        printf("\n");
    }

    return(0);
}