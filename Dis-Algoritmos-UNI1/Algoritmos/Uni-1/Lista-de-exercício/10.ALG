Algoritmo "semnomet� estranho X8"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/01/2025
Var
   // Se��o de Declara��es das vari�veis
   NP,NN,N : inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   N := 1
   NP := 0
   NN := 0

   enquanto ( N <> 0 ) faca

      escreval("Digite o valor")
      leia(N)

      se ( N > 0 ) entao
         NP := NP + 1
      senao
         se (N < 0 ) entao
            NN := NN + 1
         senao
            escreval("0 � neutre")
         fimse
         fimse

      fimenquanto

      escreval("N�meros positivos", NP)
      escreval("N�meros negativos", NN)

Fimalgoritmo