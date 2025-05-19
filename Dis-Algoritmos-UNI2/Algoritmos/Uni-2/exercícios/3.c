/*faça um programa que recebe 10 valores, mostre o maior valor, o menor valor a média dos valores informados: utilizando todas as estruturas de repetição*/
#include <stdio.h>
int main()
{
    float maior= 0 , menor= 0 , media = 0, n = 0, soma = 0;
    int i = 0;

    for (i = 1; i <= 10; i =  i + 1)
    {
        printf("informe o %d° valor\n", i);
        scanf("%f", &n);
        soma = soma + n;

        if (maior < n)
        {
            maior = n;
        }
        if (menor > n)
        {
            menor = n;
        }
    }
    media = soma / i;

    printf("maior valor %.1f\n", maior);
    printf("menor valor %.1f\n", menor);
    printf("o valor da média é %.1f\n", media);

    return (0);
}