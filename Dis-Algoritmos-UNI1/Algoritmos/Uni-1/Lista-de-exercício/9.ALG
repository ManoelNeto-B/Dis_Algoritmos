Algoritmo "pode beber legalmente ou não"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/01/2025
Var
   // Seção de Declarações das variáveis
   ano_nasc, idade: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva ("Qual o seu ano de nascimento:")
   leia(ano_nasc)
   idade <- (2025- ano_nasc)
   se (idade >= 18) entao
      escreva("maior de idade", idade)
   senao
      escreva ("manor de idade", idade)
   fimse

Fimalgoritmo