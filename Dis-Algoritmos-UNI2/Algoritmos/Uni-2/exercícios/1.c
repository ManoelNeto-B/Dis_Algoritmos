/*faça um programa em C que coloque na tela a tabuada de multiplicação do número 5 da seguinte forma: usando a estrutura while
5 X 1 = 5
5 X 2 = 10
...
5 X 10 = 50*/

#include <stdio.h>
int main()
{
    int i = 1;
    float m = 0;

    while (i <= 10)
    {
        m = 5 * i;
        printf("5 X %d = %f \n", i, m);
        i = i + 1;
    }
    return (0);
}