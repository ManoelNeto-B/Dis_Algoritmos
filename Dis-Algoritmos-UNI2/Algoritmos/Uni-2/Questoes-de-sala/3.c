/*faça uma função que calcule o maior entre 2 números*/

#include<stdio.h>

int maiormenor ( int a, int b );

int main () {

 int n1 = 0, n2 = 0, maior = 0; 

 printf("Digite os valores\n");
 scanf("%d %d", &n1, &n2);

  maior = maiormenor ( n1,n2 );  

  printf("O maior valor digitado é : %d\n", maior);

  return(0); 
}

int maiormenor ( int a, int b ){
    if ( a > b ) {
        return (a);
    } else {
        return (b);
    }
}