/*9. Faça um programa em C que exiba na tela os números ímpares entre 100 e 300.*/
 #include<stdio.h>
 int main () {
   int i = 101;

    for ( i = 101; i <= 300; i = i + 2) {
        printf("%d\n", i);
    } 

    return(0);
 }