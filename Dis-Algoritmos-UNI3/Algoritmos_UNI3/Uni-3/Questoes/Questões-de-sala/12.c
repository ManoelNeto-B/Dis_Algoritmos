/*faça um programa em C que recebe um número inteiro e calcule o fatorial desse número. Use função*/
#include<stdio.h>

int fatorial ( int a);

int main () {
    int n = 0, fa = 0;

    printf(">>INFORME O VALOR DESEJADO<<\n");
    scanf("%d", &n);

    fa = fatorial(n);

    printf(">>FATORIAL = %d <<", fa);

    return(0);
}

int fatorial ( int a){
    int fat = 1, i = 0;

    for ( i = 1; i <= a; i = i + 1){
    fat = fat * i;
    }
    return(fat);
}