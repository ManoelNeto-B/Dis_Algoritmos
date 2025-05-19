/*Faça uma função que receba um número inteiro e retorne 1 se ele for par e 0 se for ímpar*/

#include<stdio.h>

int par_impar( int a );

int main () {

    int n = 0, v = 0;

    printf("Informe um valor\n");
    scanf("%d",&n);

      v = par_impar(n);

      printf("%d", v);

      return(0);
}

int par_impar( int a ){

    if ( a % 2 == 0 ){
        return 0;
    } else {
        return 1;
    }
}