/*faça um progrma que leia 10 números e conte quantos são pares e quantos são ímpares e mostre o resultado*/

#include<stdio.h>

int main () {
    int caixa [10], i = 0, ni = 0, np = 0;

    printf(">>INFORME OS VALORES DO VETOR<<\n");
    for(i = 0; i < 10; i = i + 1){
        scanf("%d", &caixa[i]);

      if ( caixa[i] % 2 == 0 ){
        np = np + 1;
      } else {
        ni = ni + 1;
      }

    }

    printf(">>QUANTIDADE DE NÚMEROS PARES : %d <<\n", np);
    printf(">>QUANTIDADE DE NÚMEROS ÍMPARES : %d <<\n", ni);

    return(0);
}