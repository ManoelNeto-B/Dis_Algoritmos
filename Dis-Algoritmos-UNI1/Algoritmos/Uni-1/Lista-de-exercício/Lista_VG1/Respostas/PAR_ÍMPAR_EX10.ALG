Algoritmo "Par_�mpar_EX10"
// Disciplina   : Monitoria de algoritmo
// Professor   : Laysa Mabel
// Autor(a)    : Manoel Neto
// Data atual  : 28/04/2025
Var
   n, np, ni, i :inteiro


Inicio
   para i de 1 ate 10 passo 1 faca
      escreval(">>Informe o ", i, "� valor<<")
      leia(n)
      
      se (n <> 0) entao
         se (n % 2 = 0) entao

            np := np + 1
         senao
            ni := ni + 1
         fimse
      fimse

   fimpara
   escreval("Quantidade de n�meros Pares: ",np)
   escreval("Quantidade de n�meros �mpares : ",ni)



Fimalgoritmo