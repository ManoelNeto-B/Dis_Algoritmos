Algoritmo "Cade o sal�rio do SLT EX9"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/01/2025
Var
// Se��o de Declara��es das vari�veis 
 VH,HT,PD,SB,TD,SL : real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
 escreval("come�e digitando o valor da hora aula")
 leia(VH)
 escreval("agora digite o n�mero de horas trabalhadas em uma m�s")
 leia(HT)
 escreval("por �ltimo digite o percentual de desconto do INSS")
 leia(PD)
 
 SB := HT*VH
 
 TD :=(PD / 100) * SB
 
 SL := SB - TD
 
 escreval("Aqui est�o suas informa��es")
 
 escreval("Sal�rio bruto: R$", SB)
 escreval("N�mero de horas trabalhada", HT)
 escreval("Valor da hora aula", VH)
 escreval("Total de desconto", TD)
 escreval("Percentual de desconto", PD)
 escreval("Sal�rio l�quido", SL)

Fimalgoritmo