/*implemente um programa em C que leia 2 matrizes tamanho definido pelo usuário e calcule a matriz da soma das duas*/

#include<stdio.h>

int main () {
    int i = 0, j = 0, l = 0, c = 0;

    printf("<<INFORME AS LINHAS E AS COLUNAS DA MATRIZ>>\n");
    scanf("%d %d", &l, &c);

    int a [l] [c], b [l] [c], C [l] [c];

    printf("<<INFORME OS VALORES DA MATRIZ A>>\n");
    for ( i = 0; i < l; i = i + 1){
        for ( j = 0; j < c; j = j + 1){
            scanf("%d ", &a[i][j]);
        }
    }

    printf("<<INFORME OS VALORES DA MATRIZ B>>\n");
    for ( i = 0; i < l; i = i + 1){
        for ( j = 0; j < c; j = j + 1){
            scanf("%d ", &b[i][j]);
        }
    }

    printf("<<VALORES DA MATRIZ C>> = A + B\n");
    for ( i = 0; i < l; i = i + 1){
        for ( j = 0; j < c; j = j + 1){

            C[i][j] = a[i][j] + b[i][j];

            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return (0);
}