/*9. Crie um vetor de 5 elementos inteiros, preencha-o com valores fornecidos pelo
usuário e inverta a ordem dos elementos do vetor. Imprima o vetor invertido.*/

#include<stdio.h>

int main () {
    int vet[5], vet2[5], i = 0, j = 0;

    printf(">>INFORME OS VALORES DO VETOR<<\n");
    for ( i = 0; i < 5; i = i + 1){
        scanf("%d", &vet[i]);
        for ( j = 4; j >= 0; j = j - 1){
            vet2[i] = vet[i];
        }
    }

    printf(">>VALORES DO VETOR 2<<\n");
    for (i = 4; i >= 0; i = i - 1){
        printf("%d", vet2[i]);
    }

    return(0);
}