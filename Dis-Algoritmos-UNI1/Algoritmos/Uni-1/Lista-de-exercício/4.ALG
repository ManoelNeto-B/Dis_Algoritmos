Algoritmo "Demorei para entender"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/01/2025
Var
   // Seção de Declarações das variáveis
   N, N1 : real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("digite o número desejado")
   leia(N)
   se ( N<10) entao
      N1 <- N * 2
      escreva("o dobro do seu número é", N1)
   senao
      Se (N>=10) entao
         N1 <- N*3
         escreva("o triplo do seu número é", N1)
      fimse
   fimse

Fimalgoritmo