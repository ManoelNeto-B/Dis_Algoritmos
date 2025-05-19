/*5. Crie um programa que preencha os elementos de um vetor até que o usuário digite
o valor zero. Em seguida, o programa deverá solicitar um número ao usuário. O
programa deverá testar se este número está presente no vetor e imprimir sua
posição.*/
#include<stdio.h>

int main () {
   int i = 1, caixa [100];

   printf("<<DIGITE 0 QUANDO QUIZER PARAR A EXECUCAO>>");

    for ( i = 1; i <= 100; i = i + 1){
        do{
        scanf("%d", &caixa[i]);
        printf("%d", caixa[i]);
        } while ( caixa [i] != 0)
        
    }

    return(0);

}
    