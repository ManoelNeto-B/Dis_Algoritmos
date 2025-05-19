/*6. Faça um programa em C que mostre a tabuada de qualquer número escolhido pelo
usuário (considerar tabuada do número 1 ao 10).*/
#include<stdio.h>
int main () {
    int n=0 , i, mult=0;

  printf("Informe o valor da tabuada\n");
  scanf("%d", &n);

  for ( i = 1; i <= 10; i = i + 1) {
    mult = n * i;
    printf("%d X %d = %d\n", n,i,mult);
  }
  return(0);
}