/*5. Elabore um programa que solicita e armazena cinco números reais em um vetor,
denominado de a, sendo que esses números serão utilizados para preencher outro
vetor. Sendo assim, declare outro vetor, denominando de b, do mesmo tipo e tamanho
de a e, em seguida, o preencha de acordo com as seguintes condições:
• Se o índice do vetor a for zero, insira em b o respectivo valor de a;
• Se o índice de a for par, insira em b o respectivo valor de a multiplicado por 5;
• Se o índice do vetor a for ímpar, insira em b o respectivo valor de a somado com 5;
Ao final, o programa deve exibir o conteúdo dos vetores a e b*/

#include<stdio.h>

int main () {
    float a[5], b[5];
    int i = 0;

    printf(">>INFORME OS VALORES DO VETOR<<\n");
    for ( i = 0; i < 5; i++){
        scanf("%f", &a[i]);
        if (i == 0){
            b[i] = a[i];
        } else if (i % 2 == 0){
            b[i] = a[i] * 5;
        } else {
            b[i] = a[i] + 5;
        }
    }

    printf("\n");

    printf(">>VALORES DO VETOR [A]<<\n");
    for( i = 0; i < 5; i++){
        printf("%f\n", a[i]);
    }

    printf("\n");

    printf(">>VALORES DO VETOR [B]<<\n");
    for( i = 0; i < 5; i++){
        printf("%f\n", b[i]);
    }

    return(0);
}