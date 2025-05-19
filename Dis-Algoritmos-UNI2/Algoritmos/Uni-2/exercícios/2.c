/*escreva um programa que calcule a média aritmética de 2 notas de uma turma de 60 alumos*/

#include <stdio.h>
int main()
{
    float n1 = 0, n2 = 0, m = 0;
    int i = 1;

    while (i <= 60)
    {
        printf("Digite as notas do %dº aluno \n", i);
        scanf("%f %f", &n1, &n2);

        m = (n1 + n2) / 2;
        printf("A média do aluno %dº foi : %.1f \n", i, m);

        i = i + 1;
    }
    return (0);
}