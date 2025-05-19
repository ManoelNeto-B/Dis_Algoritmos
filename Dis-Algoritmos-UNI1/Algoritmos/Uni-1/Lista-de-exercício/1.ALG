Algoritmo "A mente vai te enganar"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/01/2025
Var
// Seção de Declarações das variáveis 
   N,NP,NI,CONT,I: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
I := 1
  para CONT de 1 ate 10 passo 1 faca
  
  escreval("Digite o",I,"º número")
  leia(N)
  
  se (N % 2 = 0) entao
  NP := NP+1
  senao
  NI := NI+1
  fimse
  
  I := I+1
  
  fimpara
  
  escreval("A quantidade de números páres é", NP)
  escreval("A quantidade de números ímpares é", NI)

Fimalgoritmo