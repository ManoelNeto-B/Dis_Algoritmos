/*3. Elabore um programa que solicita e armazena o nome e três notas de cinco alunos.
Para armazenar os nomes, crie uma matriz 5 x 20 e para armazenar as notas, crie
uma matriz 5 x 3. Por fim, o programa deve exibir uma mensagem com o nome e a
média aritmética de cada aluno.;*/

#include<stdio.h>

int main () {

    char Mat_nome[5][20];
    float Mat_nota[5][3], soma = 0, media = 0;
    int i = 0, j = 0, x = 1;

    for( i = 0; i < 5; i++){
        printf(">>INFORME O NOME DO %dº ALUNO<<\n", x++);
        gets(Mat_nome[i]);
    }

    printf("\n");
    x = 1;

    for ( i = 0; i < 5; i++){
        printf(">>INFORME AS NOTAS DO %dº ALUNO<<\n", x++);
        for ( j = 0; j < 3; j++){
        scanf("%f", &Mat_nota[i][j]);
        }
        
    }

    for ( i = 0; i < 5; i ++){
        soma = 0;
        for ( j = 0; j < 3; j ++){
            soma = soma + Mat_nota[i][j];
        }
        media = soma / 3;
        printf(">>%s TEVE MEDIA : %.1f\n", Mat_nome[i], media);
    }

return(0);

}