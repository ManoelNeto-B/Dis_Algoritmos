/*8. Faça um programa em C (utilize a estrutura for) que leia 10 valores inteiros e:
• Encontre e mostre o maior valor
• Encontre e mostre o menor valor
• Calcule e mostre a média dos números lidos*/

#include<stdio.h>
int main () {
    int n = 0, i = 0, maior = 0, menor = 0,qdn = 0, soma = 0;
    float media = 0 ;

    for ( i = 1; i <= 10; i = i + 1) {
     printf("Digite o %d valor\n", i);
     scanf("%d", &n);
     qdn = qdn + 1;
     soma = soma + n; 

     if ( n > maior ) {
        maior = n;
     }
     if ( n < menor ) {
        menor = n;
     }
    }
    media = qdn / soma ;

    printf("Maior número %d\n", maior);
    printf("menor número %d\n", menor);
    printf("media %f\n", media);

    return(0);
}