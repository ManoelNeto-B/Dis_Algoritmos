Algoritmo "tá neutro,tá fase EX3-2"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/01/2025
Var
   // Seção de Declarações das variáveis
   N : real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Digite o valor")
   leia(N)

   se (N = 0) entao
      escreva ("seu valor é neutro : 0")
   senao
      se (N > 0) entao
         escreva ("seu valor é positivo")
      senao
         escreva("seu valor é negativo")
      fimse
   fimse

Fimalgoritmo