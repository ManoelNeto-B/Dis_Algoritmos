Algoritmo "passa ou n�o passa 2.0"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 15/01/2025
Var
   // Se��o de Declara��es das vari�veis
   N1,N2,N3,R : real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreva("Digite as tr�s notas")
   leia (N1,N2,N3)

   R <- (N1 + N2 + N3)/3

   se (R>=7) entao
      escreval("Aluno aprovado: m�dia :", R)
   senao
      se (R<3) entao
         escreval("Aluno reprovado: m�dia :", R)
      senao
         escreval("Aluno em recupera��o: m�dia :", R)
      fimse
   fimse

Fimalgoritmo