/*3. Faça um programa em C que receba um número inteiro qualquer e mostre se ele é par
ou ímpar.*/

#include<stdio.h>
int main () {
    int n = 0;

    printf ("Informe um valor inteiro\n");
    scanf("%d", &n);

    if ( n % 2 == 0 ) {
     printf("seu número é par");
    } else {
        printf("seu número é impar");
    }
    return (0);
}