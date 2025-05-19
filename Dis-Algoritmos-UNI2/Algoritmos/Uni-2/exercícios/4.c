/*faça um programa que peça valores ao usuário até que ele digite 0. o programa deverá mostrar quantos valores positivos e quantos negativos foram digitados*/
#include <stdio.h>
int main()
{
    int n = 1, np = 0, nn = 0, i = 1;

    while (n != 0)
    {
        printf("informe o %dº valor \n", i);
        printf("lembrando que quando quizer parar digite 0 \n");
        scanf("%d", &n);
        i = i + 1;

        if (n > 0)
        {
            np = np + 1;
        }
        else if (n < 0)
        {
            nn = nn + 1;
        }
        else
        {
            printf("0 é um valor neutro\n");
        }
    }

    printf("Quantidade de números positivos: %d\n", np);
    printf("Quantidade de números negativos: %d\n", nn);

    return(0);
}