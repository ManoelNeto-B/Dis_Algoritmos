/*7. Criar um programa que checa se o número digitado pelo usuário é palíndromo.
Número palíndromo é aquele que, se lido de trás para frente e de frete para trás, é
o mesmo.
Exemplos: 2112, 666, 2442, etc...
Dica: coloque cada dígito do número em um vetor e faça a comparação dos
números.
O número testado deve ter 4 dígitos.*/

#include<stdio.h>

int main () {
    int vet[4], vet2[4], i = 0;

    printf(">>INFORME 4 VALORES<<\n");
    for (i = 0; i < 4; i = i + 1){
        scanf("%d", &vet[i]);
        vet2[i] = vet[i];
    }

    for ( i = 3; i >= 0; i = i - 1 ){
     for ( i = 0; i < 4; i = i + 1 ){

        if (vet2[i] == vet[i]){
            printf(">>O NUMERO E PALINDROMO<<\n");
        }

     }
    }
}