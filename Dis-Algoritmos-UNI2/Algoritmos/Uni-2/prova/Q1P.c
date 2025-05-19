/*1. Faça um programa em C que receba três números inteiros e mostre o maior deles.
Considere que os números sempre serão diferentes.*/

#include <stdio.h>
int main()
{
    int n = 1, i = 0, maior = 0, menor = 0;

    while (n <= 3)
    {
        printf("informe o valor");
        scanf("%d", &i);

        if (i > maior)
        {
            maior = i;
        }
        if (i < menor)
        {
            menor = i;
        }

        n = n + 1;
    }
    printf("maior valor: %d\n", maior);
    printf("menor valor: %d\n", menor);

    return(0);
}