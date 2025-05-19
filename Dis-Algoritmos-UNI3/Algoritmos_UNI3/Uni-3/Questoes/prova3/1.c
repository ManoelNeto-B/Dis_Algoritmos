/*1. Faça uma função que receba dois números inteiros e retorne a soma dos números
inteiros existentes entre eles. Faça o programa main para chamar a função. Por
exemplo: Para os valores de entrada 2 e 8, a soma será 3+4+5+6+7=25.*/

 #include<stdio.h>

 int soma ( int a, int b);

 int main () {
    int n1 = 0, n2 = 0, s = 0;

    printf(">>O SEGUNDO VALOR NAO DEVE SER MAIOR QUE O PRIMEIRO/NUMEROS NEGATIVOS SAO INVALIDOS<<\n\n\n");

    do
    {
    printf(">>INFORME 2 NUMEROS PARA CALCULAR O SOMATORIO DO INTERVALO ENTRE ELES<<\n");
    scanf("%d %d", &n1, &n2);
    } while (n1 > n2 || n1 < 0 );

     s = soma(n1,n2);

     printf(">>A SOMA DOS VALORES E : %d\n", s);

     return(0);
    
 }

 int soma (int a, int b){
    int so = 0, i = 0;

    for(  i = a + 1 ; i < b; i++){
        so = so + i;
    }
    return(so);
    
 }