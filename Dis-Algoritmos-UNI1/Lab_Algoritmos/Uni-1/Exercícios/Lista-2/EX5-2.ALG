Algoritmo "EX5-2"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 21/01/2025
Var
   // Seção de Declarações das variáveis
   S,SP : real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Digite seu salário")
   leia (S)

   se ( S < 2000 ) entao
      SP := ( S * 15 ) / 100
      escreval("seu salário sem reajuste é: R$", S)
      escreval("seu salário com reajuste é: R$", SP)
   senao
      se ( S >= 2000 ) e ( S < 5000 ) entao
         SP := ( S * 10 ) / 100
         escreval("seu salário sem reajuste é: R$", S)
         escreval("seu salário com reajuste é: R$", SP)
      senao
         se ( S >= 5000 ) entao
            SP := ( S * 5 ) / 5
            escreval("seu salário sem reajuste é: R$", S)
            escreval("seu salário com reajuste é: R$", SP)
         fimse
      fimse
   fimse



Fimalgoritmo