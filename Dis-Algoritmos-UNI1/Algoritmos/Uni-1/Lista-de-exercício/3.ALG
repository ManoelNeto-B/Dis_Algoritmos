Algoritmo "Bora que d� certo"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/01/2025
Var
// Se��o de Declara��es das vari�veis 
 N,NCD,QDN,S,VIN,QDIN: inteiro
 MACD,MAVIV: Real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
 N := +1
 
 enquanto ( N >= 0 ) faca
 
 escreval("Digite o valor desejado")
 leia(N)
 
 se (N >= 100) e (N <= 200) entao
 S:= S + N
 QDN:= QDN + 1
 senao
 VIN:= VIN + N
 QDIN:= QDIN + 1
 fimse
 
 fimenquanto
 
 MACD:= S / QDN
 MAVIV:= VIN / QDIN
 
 escreval("Quantidade de valores enre 100 e 200", QDN)
 escreval("M�dia dos valores entre 100 e 200", MACD)
 escreval("Quantidade de n�meros invalidos", QDIN)
 escreval("M�dia dos valores invalidos", MAVIV)
 

Fimalgoritmo