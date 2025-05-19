Algoritmo "Barraca da feira EX2-2"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/01/2025
Var
   // Seção de Declarações das variáveis
   M : inteiro
   V : real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Digite a quantidade de frutas que deseja")
   leia (M)

   se ( M >= 12 )entao
      V := M * 1.10
   senao
      V := M * 1.30

   fimse

   escreval ("O valor toral a pagar é R$", V)

Fimalgoritmo