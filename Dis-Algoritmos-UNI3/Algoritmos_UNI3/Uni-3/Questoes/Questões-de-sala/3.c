/*faça um programa que leia 5 valores e armazena em um vetor, em seguida mostra os valores e a soma deles*/

#include<stdio.h>

int main () {
    int caixa [5], soma = 0, i = 0;

    printf("<<INFORME OS VALORES DO VETOR>>\n");

    for ( i = 0; i < 5; i = i + 1 ){
        scanf("%d", &caixa[i]);
        soma = soma + caixa[i];
    }

    printf("<<VALORES INFORMADOS NO VETOR>>\n");
    
    for ( i = 0; i < 5; i = i + 1 ){
        printf("%d\n", caixa[i]);
    }
    printf("<<SOMA = %d>>", soma);

    return(0);
}