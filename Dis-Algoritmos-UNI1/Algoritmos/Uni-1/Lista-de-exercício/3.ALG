Algoritmo "Bora que dá certo"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/01/2025
Var
// Seção de Declarações das variáveis 
 N,NCD,QDN,S,VIN,QDIN: inteiro
 MACD,MAVIV: Real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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
 escreval("Média dos valores entre 100 e 200", MACD)
 escreval("Quantidade de números invalidos", QDIN)
 escreval("Média dos valores invalidos", MAVIV)
 

Fimalgoritmo