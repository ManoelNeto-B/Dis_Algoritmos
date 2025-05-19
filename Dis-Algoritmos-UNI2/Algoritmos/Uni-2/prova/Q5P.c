/*5. Elabore um programa que leia dois valores do usuário e a operação que ele deseja
executar (Operações: soma, subtração, divisão, multiplicação). Execute a operação
desejada e imprima na tela. Utilize o comando switch case*/
#include<stdio.h>
int main () {
    float n1 = 0, n2 = 0, soma = 0, subtracao = 0, divisao = 0, multiplicacao = 0;
    int i = 0;

    printf("Aperte 1 para somar\n");
    printf("Aperte 2 para subtração\n");
    printf("Aperte 3 para divisão\n");
    printf("Aperte 4 para multiplicação\n");
    scanf("%d", &i);

    switch ( i ) {
      case (1):
      printf("informe os valores da soma\n");
      scanf("%f %f", &n1,&n2);
      soma = n1 + n2;
      printf("A soma dos valores informados é: %.1f\n", soma);
      break;

      case (2):
      printf("informe os valores da subtração\n");
      scanf("%f %f", &n1,&n2);
      subtracao = n1 - n2;
      printf("A subtração dos valores informados é: %.1f\n", subtracao);
      break;

      case (3):
      printf("informe os valores da divisão\n");
      scanf("%f %f", &n1,&n2);
      if (n2 == 0){
        printf("A divisão não é possível quando o denominador é 0\n");
      } else {
        divisao = n1 / n2;
        printf("a divisão dos valores informados é: %.1f\n", divisao);
      }

      case (4):
      printf("informe os valores da multiplicação\n");
      scanf("%f %f", &n1,&n2);
      multiplicacao = n1 * n2;
      printf("a multiplicação dos valores é: %.1f\n", multiplicacao);

      default:
      printf("código inválido");
      break;
    }
    return(0);
}