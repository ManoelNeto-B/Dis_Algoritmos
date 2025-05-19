Algoritmo "Sim, ela vai"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/01/2025
Var
   // Seção de Declarações das variáveis
   N,N1,FAT :inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   
   escreval("Digite um valor")
   leia(N)
   
   
   se (N >= 0) entao
     FAT := 1
      repita
         FAT := FAT *N
         N := N-1
      ate (N = 0)

   senao
      escreval("Digite um número positivo ou neutro")
   fimse

   escreval("O fatorial do seu número é", FAT)


Fimalgoritmo