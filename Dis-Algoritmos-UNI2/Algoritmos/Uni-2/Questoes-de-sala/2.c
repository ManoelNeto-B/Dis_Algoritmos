/*faça uma função para calcular a média de 2 notas*/
#include<stdio.h>

float media (float a, float b);

int main () {
    float n1 = 0, n2 = 0, m = 0;

    printf("informe as notas do aluno\n");
    scanf("%f %f", &n1, &n2);

    m = media (n1,n2);

    printf("A media do aluno: %.1f", m);

    return(0);
}

float media (float a, float b){

    return( ( a + b ) / 2 );
    
}