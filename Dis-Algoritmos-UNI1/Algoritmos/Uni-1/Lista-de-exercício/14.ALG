Algoritmo "X10"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/01/2025
Var
// Se��o de Declara��es das vari�veis 
 P,MA : real
 cont, A :inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
 A := 1
 MA := 0
  para cont de 1 ate 50 passo 1 faca
  
  escreval("digite o peso da",A,"� pessoa")
  leia (P)
  MA := MA + P
  A := A + 1
  
  fimpara
  
  MA := MA / 50
  
  escreval("a m�dia de peso do grupo �", MA)

Fimalgoritmo