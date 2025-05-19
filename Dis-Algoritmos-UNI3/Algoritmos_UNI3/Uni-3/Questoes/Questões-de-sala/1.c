/*escreva um programa que realize a leitura dos salários pagos a um funcionário durante um ano. Em seguida, o programa deverá mostrar os valores mensais e o total anual*/

#include<stdio.h>

int main () {
    float salario [12], total = 0;
    int i = 0;

    printf(">>INFORME OS SALÁRIOS<<\n");

    for ( i = 1; i <=12; i = i + 1 ){
        scanf("%f", &salario[i]);
    }

    for ( i = 1; i <=12; i = i + 1 ){
        printf ("<<SALÁRIO DO %dº MÊS : R$ %f\n", i , salario [i]);
        total = total + salario [i];
    }

    printf(">>SALÁRIO TOTAL ANUAL<<: R$ %f", total);

    return(0);
}