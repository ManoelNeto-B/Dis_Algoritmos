/*2. Faça uma função que receba três números inteiros: a, b e c, onde a>1; e retorne a
soma de todos os números inteiros de b até c que sejam divisíveis por a. Exemplo:
Para os valores de entrada 2 (para a), 5 (para b) e 10 (para c), a soma será 6+8+10=
24.*/

#include<stdio.h>

int coisa(int a, int b, int c);

int main (){
    int n1 = 0, n2 = 0, n3 = 0, soma = 0;
    printf(">>O PRIMEIRO VALOR DEVE SER IGUAL OU MAIOR QUE 1<<\n\n\n");

    do{
        printf(">>INFORME OS VALORES<<\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    } while ( n1 < 1);

    soma = coisa(n1,n2,n3);

    printf(">>A SOMA DOS VALORES E : %d<<\n", soma);

    return(0);

}

int coisa (int a, int b, int c){
    int i = 0, so = 0;

    for ( i = b; i <= c; i++){
        if ( i % a == 0){
            so = so + i;
        }
    }
    return(so);
}
    