/*4. Faça uma função que leia cinco valores inteiros e imprima o maior e o menor
valor.*/

#include<stdio.h>

void maior_menor(int a);

int main () {
    int n = 0;

    printf(">>INFORME OS VALORES<<\n");
    scanf("%d", &n);

    maior_menor(n);

    return(0);
}

void maior_menor(int a){
    int maior = a , menor = a, i = 0, m = 0;

    for ( i = 1; i <= 5; i = i + 1){
        scanf("%d", &m);

        if( m > maior){
            maior = m;
        }
        if ( m < menor){
            menor = m;
        }

    }

    printf(">>MAIOR VALOR INFORMADO : %d <<\n", maior);
    printf(">>MENOR VALOR INFORMADO : %d <<\n", menor);

}