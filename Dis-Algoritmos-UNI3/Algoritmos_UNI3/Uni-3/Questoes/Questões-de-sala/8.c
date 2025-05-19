/*crie uma função que receba um vetor de inteiro e retorne a soma de todos os elementos do vetor{ERRADO}*/

#include<stdio.h>

int soma (int vetor[], int tamanho);

int main () {
     int t = 0, i = 0, s = 0;

    printf("<<INFORME O TAMANHO DO VETOR>>\n");
    scanf("%d", &t);

    int caixa [t];

    printf("<<INFORME OS VALORES DO VETOR>>\n");
    for(i = 0; i < t; i = i + 1){
        scanf("%d", &caixa[i]);

    }
         s =  soma(caixa, t);

    printf("<<A SOMA DOS VALORES INFORMADO É : %d\n", s);

    return(0);
}

int soma (int vetor[], int tamanho){

    int so, i = 0;

    for ( i = 0; i < tamanho; i = i + 1 ){
        so = so + vetor[i];
    }

    printf("%d", so);

    return(so);
   
}