Algoritmo "EX4"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 21/01/2025
Var
   // Se��o de Declara��es das vari�veis
   N,D,R : real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("digite os valores")
   leia(N,D)

   se ( D <> 0 ) entao
      R := N / D
      escreval("O resultado da divis�o �:", R)
   senao
      escreval("a divis�o n�o � poss�vel quando o denominador � 0")
   fimse


Fimalgoritmo