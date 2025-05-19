/*7. Faça um programa em C (com a estrutura do...while) que leia 20 valores inteiros e:
– Encontre e mostre o maior valor;
– Encontre e mostre o menor valor;
– Calcule e mostre a média dos números lidos;*/

#include <stdio.h>
int main()
{
    int i = 0, qdn = 1, n = 0, soma = 0, media = 0, maior = 0, menor = 0;

    do
    {
        printf("informe o %d valor\n", qdn);
        scanf("%d", &n);
        qdn = qdn + 1;
        soma = soma + n;

        if (n > maior)
        {
            maior = n;
        }

        if (n < menor)
        {
            menor = n;
        }
        i = i + 1;
    } while (i != 20);
    media = soma / qdn;

    printf("a média dos valores foi: %d\n", media);
    printf("maior valor digitado: %d\n", maior);
    printf("menor valor digitado: %d\n", menor);

    return (0);
}