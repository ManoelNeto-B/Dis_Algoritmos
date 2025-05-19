/*Faça um programa que peça ao usuário para armazenar 10 valores inteiros em um vetor, em seguida deve mostrar esses valores*/

#include<stdio.h>

int main (){

   int caixa [10], i = 0;

   printf(">>INFORME OS VALORES<<");
   for ( i = 0 ; i < 10; i = i + 1 ) {
   scanf("%d", & caixa [i]); 
   }

   for ( i = 0 ; i < 10; i = i + 1 ) {
    printf("%d", caixa [ i ]);
   }

   return(0);
  

}

