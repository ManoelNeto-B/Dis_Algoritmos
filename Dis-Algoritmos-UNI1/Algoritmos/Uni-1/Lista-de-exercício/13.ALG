Algoritmo "tá-ficando-complicado-Repita"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/01/2025
Var
   // Seção de Declarações das variáveis
   N,QND,NP,NI,S : inteiro
   MA : real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   N  := 1
   QND:= 0
   NP := 0
   NI := 0
   S  := 0
   MA := 0

   repita

      escreval ("Digite o valor desejado")
      leia (N)

      QND := QND +1

      se (N % 2 = 0) entao

         NP := NP +1

      senao

         NI :=  NI +1

      fimse

      S := S + N

   ate ( N = 0 )
   
   QND := QND - 1
   NP := NP - 1

   MA := S / QND

   escreval("Quantidade de números digitados :", QND)
   escreval("Média aritmética: ", MA)
   escreval("Quantidade de números pares :", NP)
   escreval("Quantidade de números ímpares:", NI)

Fimalgoritmo