/*2. Implemente um programa em C leia o código de um determinado produto e mostre a
sua classificação. Utilize a estrutura if else
Código Classificação
1 - Alimento não-perecível
2, 3 ou 4 - Alimento perecível
5 ou 6 - Vestuário
7 - Higiene pessoal
8, 9, 10 - Utensílios domésticos
Qualquer outro código Inválido*/

#include <stdio.h>
int main()
{
    int n = 0;

    printf("informe o código do produto\n");
    printf("1 - Aliemento não-perecível\n");
    printf("2-3-4- Alimento perecível\n");
    printf("5-6- Vestuário\n");
    printf("7- Higiene pessoal\n");
    printf("8-9-10- Utensílios domésticos\n");
    printf("Qualquer outro código inválido\n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("alimento não-perecível");
    }
    else if (n >= 2 && n <= 4)
    {
        printf("Alimento perecível");
    }
    else if (n == 5 || n == 6)
    {
        printf("vestuário");
    }
    else if (n == 7)
    {
        printf("higiene pessoal");
    }
    else if (n >= 8 && n <= 10)
    {
        printf("Utencílios domésticos");
    }
    else
    {
        printf("código inválido");
    }

    return (0);
}
