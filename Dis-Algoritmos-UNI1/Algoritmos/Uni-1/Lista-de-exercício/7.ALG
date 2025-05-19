Algoritmo "passa ou não passa 2.0"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 15/01/2025
Var
   // Seção de Declarações das variáveis
   N1,N2,N3,R : real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Digite as três notas")
   leia (N1,N2,N3)

   R <- (N1 + N2 + N3)/3

   se (R>=7) entao
      escreval("Aluno aprovado: média :", R)
   senao
      se (R<3) entao
         escreval("Aluno reprovado: média :", R)
      senao
         escreval("Aluno em recuperação: média :", R)
      fimse
   fimse

Fimalgoritmo