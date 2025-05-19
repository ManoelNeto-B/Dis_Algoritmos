/*2. Faça um programa que solicita e armazena seis números inteiros em uma
matriz 2 x 3, denominada de A, e solicita e armazena seis números inteiros em outra
matriz 2 x 3, denominada de B. Em seguida, exiba a soma dessas matrizes;.*/

#include<stdio.h>

int main () {
    int i = 0, j = 0, A[2][3], B[2][3], soma[2][3];

    printf(">>INFORME OS VALORES DA MATRIZ A<<\n");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 3; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n");

    printf(">>INFORME OS VALORES DA MATRIZ B<<\n");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 3; j++){
            scanf("%d", &B[i][j]);
        }
    }

    printf("\n");

    printf(">>MATRIZ SOMA DE [A] E [B]<<\n");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 3; j++){
            soma[i][j] = A[i][j] + B [i][j];
            printf("%d ", soma [i][j]);
        }
        printf("\n");
    }
    
return(0);

}