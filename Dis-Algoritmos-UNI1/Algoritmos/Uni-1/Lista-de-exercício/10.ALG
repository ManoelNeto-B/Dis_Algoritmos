Algoritmo "semnometá estranho X8"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/01/2025
Var
   // Seção de Declarações das variáveis
   NP,NN,N : inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
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
            escreval("0 é neutre")
         fimse
         fimse

      fimenquanto

      escreval("Números positivos", NP)
      escreval("Números negativos", NN)

Fimalgoritmo