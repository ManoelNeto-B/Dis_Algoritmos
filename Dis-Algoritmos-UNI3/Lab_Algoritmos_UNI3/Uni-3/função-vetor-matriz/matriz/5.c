/*5. Crie um programa que solicita e armazena n × m números inteiros em uma matriz n
× m, denominada de A, onde n e m também devem ser fornecidos pelo usuário.
Construa outra matriz, denominada de B, do mesmo tipo e tamanho de A, onde cada
elemento de B deve ser definido pela multiplicação do elemento correspondente de
A por 3, ou seja, B[i][j] deve ser igual a A[i][j] * 3, onde i e j correspondem aos
índices das matrizes. Dessa forma, se A = [
3 2 1
4 0 5
8 6 9
], teremos B = [
9 6 3
12 0 15
24 18 27
].
Ao final, o programa deve exibir o conteúdo de A e B.;*/

#include<stdio.h>

int main () {
  int i = 0, j = 0, n = 0, m = 0;
  
  printf(">>INFORME O TAMANHO DA MATRIZ [A]<<\n");
  scanf("%d %d", &n, &m);

  printf("\n");

  int A[n][m], B[n][m];

  printf(">>INFORME OS VALORES DA MATRIZ<<\n");
  for ( i = 0; i < n; i++){
   for ( j = 0; j < m; j++){
    scanf("%d", &A[i][j]);
    B[i][j] = 3 * A[i][j];
   } 
  }

  printf("\n");

  printf(">>MATRIZ [A]>>\n");
  for ( i = 0; i < n; i++){
    for ( j = 0; j < m; j++){
        printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  printf(">>MATRIZ [B]>>\n");
  for ( i = 0; i < n; i++){
    for ( j = 0; j < m; j++){
        printf("%d  ", B[i][j]);
    }
    printf("\n");
  }

  return(0);
}