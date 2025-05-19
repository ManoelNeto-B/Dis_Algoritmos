/*Faça uma função para somar 2 números inteiros*/

#include<stdio.h>

int soma (int a , int b);

int main () {

    int n1 = 0, n2 = 0;

    printf("Digite os valores\n");
    scanf("%d %d", &n1, &n2);

    printf ("A soma dos valores foi %d" , soma(n1, n2));

    return(0);
}

int soma (int a, int b){
    return (a + b);
}