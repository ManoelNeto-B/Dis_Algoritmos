/*implemente um programa em C que leia 2 matrizes A e B e calcule a matriz resultante da multiplicação de A por B*/

#include<stdio.h>

int main () {
    int i = 0, j = 0, l = 0, c = 0, l2 = 0, c2 = 0, a [l] [c], b [l2] [c2];
    

    printf(">>AVISO, A QUANTIDADE DE COLUNAS DA MATRIZ [A] DEVE SER IGUAL AS LINHAS DA MATRIZ [B]<<\n\n\n");

    do
    {
    
    printf(">>INFORME AS LINHAS E AS COLUNAS DA MATRIZ A<<\n");
    scanf("%d %d", &l, &c);

    int a[l] [c];

    printf(">>INFORME AS LINHAS E AS COLUNAS DA MATRIZ B<<\n");
    scanf("%d %d", &l2, &c2);

    int b[l2] [c2];

    } while ( c != l2);

    printf(">>INFORME OS VALORES DA MATRIZ [A]<<\n");
    for ( i = 0; i < l; i = i + 1){
        for ( j = 0; j < c; j = j + 1){
            scanf("%d", &a[i][j]);
        }
    }

    printf(">>INFORME OS VALORES DA MATRIZ [B]<<\n");
    for ( i = 0; i < l2; i = i + 1){
        for ( j = 0; j < c2; j = j + 1){
            scanf("%d", &b[i][j]);
        }
    }

    int C[l][c2];

    printf(">>VALORES DA MATRIZ C = A * B<<\n");
    for ( i = 0; i < l; i = i + 1){
        for ( j = 0; j< c2; j = j + 1){
           C[i][j] = a[i][j] * b[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return(0);

}