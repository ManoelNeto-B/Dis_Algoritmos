Algoritmo "Sim, ela vai"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/01/2025
Var
   // Se��o de Declara��es das vari�veis
   N,N1,FAT :inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   
   escreval("Digite um valor")
   leia(N)
   
   
   se (N >= 0) entao
     FAT := 1
      repita
         FAT := FAT *N
         N := N-1
      ate (N = 0)

   senao
      escreval("Digite um n�mero positivo ou neutro")
   fimse

   escreval("O fatorial do seu n�mero �", FAT)


Fimalgoritmo