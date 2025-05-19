/*3. Faça um programa que solicita e armazena cinco números inteiros em um vetor. Em
seguida, o programa deve percorrer o vetor e somar todos os seus valores. Ao final,
o programa deve exibir o resultado da soma.*/

#include<stdio.h>

int main () {

  int vet[5], i = 0, soma = 0;

  printf(">>INFORME OS VALORES DO VETOR<<\n");
  for ( i = 0; i < 5; i++){
    scanf("%d", &vet[i]);
    soma = soma + vet[i];
  }

  printf(">>A SOMA DOS VALORES FOI : %d <<", soma);

  return(0);

}