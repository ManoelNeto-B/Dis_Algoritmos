Algoritmo "t�-ficando-complicado-Repita"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/01/2025
Var
   // Se��o de Declara��es das vari�veis
   N,QND,NP,NI,S : inteiro
   MA : real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
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

   escreval("Quantidade de n�meros digitados :", QND)
   escreval("M�dia aritm�tica: ", MA)
   escreval("Quantidade de n�meros pares :", NP)
   escreval("Quantidade de n�meros �mpares:", NI)

Fimalgoritmo