Algoritmo "Cade o salário do SLT EX9"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/01/2025
Var
// Seção de Declarações das variáveis 
 VH,HT,PD,SB,TD,SL : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
 escreval("começe digitando o valor da hora aula")
 leia(VH)
 escreval("agora digite o número de horas trabalhadas em uma mês")
 leia(HT)
 escreval("por último digite o percentual de desconto do INSS")
 leia(PD)
 
 SB := HT*VH
 
 TD :=(PD / 100) * SB
 
 SL := SB - TD
 
 escreval("Aqui estão suas informações")
 
 escreval("Salário bruto: R$", SB)
 escreval("Número de horas trabalhada", HT)
 escreval("Valor da hora aula", VH)
 escreval("Total de desconto", TD)
 escreval("Percentual de desconto", PD)
 escreval("Salário líquido", SL)

Fimalgoritmo