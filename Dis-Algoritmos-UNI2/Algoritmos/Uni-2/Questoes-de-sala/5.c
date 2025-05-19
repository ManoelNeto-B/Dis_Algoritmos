/*escreva um programa que solicite 2 números ao usuário e apresente na tela o resultado da soma e o dobro de cada um dos números*/

#include<stdio.h>

int soma ( int a, int b );
int mult ( int a );

int main () {
    int n1 = 0, n2 = 0, so = 0, mu = 0, mu2 = 0; 

    printf("Informe dois valores \n");
    scanf("%d %d", &n1, &n2);

     so = soma ( n1 , n2 );
     mu = mult ( n1 );
     mu2 = mult ( n2 );

     printf("A soma dos valores é : %d\n", so);
     printf("O dobro do primeiro valor é : %d\n", mu);
     printf("O dobro do segundo valor é : %d\n", mu2);

     return(0);
}

int soma ( int a , int b ){
    return ( a + b );
}

int mult ( int a ){
    return ( a * 2 );
}