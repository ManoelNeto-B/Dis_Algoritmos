/*1. Crie um programa que solicita e armazena nove valores inteiros em uma
matriz 3 x 3. Em seguida, exiba os elementos da matriz na ordem inversa;.*/

#include<stdio.h>

int main () {
    int A [3][3], i = 0, j = 0, x = 1;

    for( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
           printf(">>INFORME O %dº VALOR DA MATRIZ A<<\n", x++ );
           scanf("%d", &A[i][j]);
        }
    }

    printf(">>VALORES DA MATRIZ A NA ORDEM INVERSA<<\n");

    for ( i = 2; i >= 0; i--) {
        for ( j = 2; j >= 0; j--){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return(0);
}