Algoritmo "Barraca da feira EX2-2"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/01/2025
Var
   // Se��o de Declara��es das vari�veis
   M : inteiro
   V : real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Digite a quantidade de frutas que deseja")
   leia (M)

   se ( M >= 12 )entao
      V := M * 1.10
   senao
      V := M * 1.30

   fimse

   escreval ("O valor toral a pagar � R$", V)

Fimalgoritmo