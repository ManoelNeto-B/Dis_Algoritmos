Algoritmo "Dobro_Triplo_EX4"
// Disciplina   : [Monitoria de algoritmo]
// Professor   : Laysa Mabel
// Descrição   : Multiplica
// Autor(a)    : Manoel Neto
// Data atual  : 26/04/2025
Var
   n : inteiro


Inicio
   escreval(">>Informe o vamor desejado<<")
   leia(n)

   se ( n < 10) entao
      n <- n*2
      escreval(">>O dobro do número desejado é :", n," <<")
   senao
      n <- n*3
      escreval(">>O triplo do número desejado é :", n," <<")
   fimse


Fimalgoritmo