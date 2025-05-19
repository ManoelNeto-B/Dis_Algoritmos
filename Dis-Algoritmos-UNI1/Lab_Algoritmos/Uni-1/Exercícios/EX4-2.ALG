Algoritmo "EX4"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 21/01/2025
Var
   // Seção de Declarações das variáveis
   N,D,R : real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("digite os valores")
   leia(N,D)

   se ( D <> 0 ) entao
      R := N / D
      escreval("O resultado da divisão é:", R)
   senao
      escreval("a divisão não é possível quando o denominador é 0")
   fimse


Fimalgoritmo