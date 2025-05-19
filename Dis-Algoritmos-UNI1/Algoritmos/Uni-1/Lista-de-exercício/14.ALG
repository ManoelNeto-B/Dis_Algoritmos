Algoritmo "X10"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/01/2025
Var
// Seção de Declarações das variáveis 
 P,MA : real
 cont, A :inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
 A := 1
 MA := 0
  para cont de 1 ate 50 passo 1 faca
  
  escreval("digite o peso da",A,"º pessoa")
  leia (P)
  MA := MA + P
  A := A + 1
  
  fimpara
  
  MA := MA / 50
  
  escreval("a média de peso do grupo é", MA)

Fimalgoritmo