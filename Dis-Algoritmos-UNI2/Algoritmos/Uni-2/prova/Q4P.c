/*4. Faça um programa em C que receba as notas de três avaliações de um aluno, calcule e
mostre a sua média baseada nos critérios abaixo:
Média >=7 → “Aprovado”
Média >=3 e <7 → “Você está em exame”
Leia nota do exame
Media Final = (notadoexame+media)/2
Mostrar média final
Se mediafinal >=5 → “Aprovado no exame”
Senão → “ Reprovado no exame”
Média < 3→ “ Reprovado sem direito a exame”*/

#include<stdio.h>
int main () {
    float n1=0,n2=0,n3=0,n4=0,media=0, mediaf=0;

    printf("informe sua notas para calcular a média\n");
    scanf("%f %f %f", &n1,&n2,&n3);
    media = (n1+n2+n3) / 3;

    if ( media >= 7 ) {
        printf("O aluno está aprovado\n");
    } else if ( media < 3 ) {
        printf("O aluno esta reprovado sem direito a exame\n");
    } else if ( media >= 3 && media < 7 ) {
        printf("o aluno está em exame\n");
        printf("Informe a nota do exame\n");
        scanf("%f", &n4);
        mediaf = (n4 + media)/2;

        if ( mediaf >= 5 ) {
            printf("sua média final foi %.1f, portanto esta aprovado\n", mediaf);
        } else {
            printf("sua média final foi %.1f,portanto esta reprovado\n", mediaf);
        }
    }

    return(0);

}