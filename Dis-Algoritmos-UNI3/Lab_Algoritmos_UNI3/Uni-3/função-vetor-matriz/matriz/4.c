/*4. Escreva um programa que solicita e armazena oito números reais em uma
matriz 4 × 2, denominada de A. Construa outra matriz, denominada de B, do
mesmo tipo e tamanho de A, e com os mesmos elementos armazenados em A,
porém de forma invertida. Ou seja, o primeiro elemento de A passa a ser o último
de B, o segundo elemento de A passa a ser o penúltimo de B e assim por diante. Ao
final, o programa deve exibir o conteúdo de A e B.;*/

#include<stdio.h>

int main () {
    float A[4][2], B[4][2];
    int i = 0, j = 0;

    printf(">>INFORME OS VALORES DA MATRIZ A<<\n");
    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 2; j++){
            scanf("%f", &A[i][j]);
            B[3-i][1-j] = A[i][j];
        }
    }

    printf("\n");

    printf(">>VALORES DA MATRIZ [A]<<\n");
    for ( i = 0; i < 4; i++){
        for( j = 0; j < 2; j++){
           printf("%.1f  ", A[i][j]);
        }
    printf("\n");
    }

    printf("\n");

    printf(">>VALORES DA MATRIZ [B]<<\n");
        for ( i = 0; i < 4; i++){
            for( j = 0; j < 2; j++){
                printf("%.1f  ", B[i][j]);
            }
            printf("\n");
        }

        return(0);
    }



    
