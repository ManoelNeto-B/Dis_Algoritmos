Algoritmo "Parada_negativa_EX9"
// Disciplina   : Monitoria de algoritmo
// Professor   : Laysa Mabel
// Autor(a)    : Manoel Neto
// Data atual  : 28/04/2025
Var

n, soma, digitados : inteiro
media : real


Inicio
n := 1

escreval(">>Informe os valores desejados<<")
escreval(">>Quando quiser ver os resultados digite um número negativo<<")

enquanto ( n >= 0) faca
leia (n)

se (n >= 100) e (n <=200) entao
soma := soma + n
digitados := digitados + 1
fimse

fimenquanto

media := soma / digitados

escreval("Média dos valores entre 100 e 200 informados : ", media)
escreval("Quantidade de valores entre 100 e 200 informados : ",digitados)


Fimalgoritmo