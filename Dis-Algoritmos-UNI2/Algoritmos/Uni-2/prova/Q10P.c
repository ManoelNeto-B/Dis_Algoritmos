/*10. Faça um programa em C que receba a idade de 10 pessoas e mostre quantas são
maiores que 18 anos*/

#include<stdio.h>
int main () {
 int i, dmaior = 0, dmenor = 0, n = 0;

 for ( i = 1; i <= 10; i = i + 1) {
    printf("digite a idade da %d pessoa\n", i);
    scanf("%d", &n);

    if ( n >= 18 ) {
        dmaior = dmaior + 1;
    } else {
        dmenor = dmenor + 1;
    }
 }
 printf("quantidade de pessoas com mais ou igual de 18 : %d\n", dmaior);
 printf("quantidade de pessoas com menos de 18: %d\n", dmenor);
}