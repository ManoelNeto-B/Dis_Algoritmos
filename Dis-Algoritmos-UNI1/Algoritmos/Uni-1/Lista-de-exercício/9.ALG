Algoritmo "pode beber legalmente ou n�o"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/01/2025
Var
   // Se��o de Declara��es das vari�veis
   ano_nasc, idade: inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreva ("Qual o seu ano de nascimento:")
   leia(ano_nasc)
   idade <- (2025- ano_nasc)
   se (idade >= 18) entao
      escreva("maior de idade", idade)
   senao
      escreva ("manor de idade", idade)
   fimse

Fimalgoritmo