Algoritmo "A mente vai te enganar"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/01/2025
Var
// Se��o de Declara��es das vari�veis 
   N,NP,NI,CONT,I: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
I := 1
  para CONT de 1 ate 10 passo 1 faca
  
  escreval("Digite o",I,"� n�mero")
  leia(N)
  
  se (N % 2 = 0) entao
  NP := NP+1
  senao
  NI := NI+1
  fimse
  
  I := I+1
  
  fimpara
  
  escreval("A quantidade de n�meros p�res �", NP)
  escreval("A quantidade de n�meros �mpares �", NI)

Fimalgoritmo