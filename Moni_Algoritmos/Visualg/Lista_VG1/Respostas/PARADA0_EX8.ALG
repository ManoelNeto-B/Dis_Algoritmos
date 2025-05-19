Algoritmo "Parada0_EX8"
// Disciplina   : Monitoria de algoritmo
// Professor   : Laysa Mabel
// Autor(a)    : Manoel Neto
// Data atual  : 28/04/2025
Var
   n, numeros_pares, numeros_impares, numeros_digitados, soma: inteiro
   media : real


Inicio
   n := 1
   escreval(">>Informe os valores desejados<<")
   escreval(">>Quando quiser ver os resultados digite 0<<")
   repita
      leia(n)

      se (n % 2 = 0) entao
         numeros_pares := numeros_pares + 1
      senao
         numeros_impares := numeros_impares + 1
      fimse

      numeros_digitados := numeros_digitados + 1

      soma := soma + n
   ate ( n = 0)
   numeros_digitados:= numeros_digitados - 1
   numeros_pares:= numeros_pares - 1
   media := soma / numeros_digitados

   escreval("Quantidade de números digitados: ", numeros_digitados)
   escreval("Média dos números digitados: ", media)
   escreval("Quantidade de números pares: ", numeros_pares)
   escreval("Quantidade de números ímpares: ", numeros_impares)


Fimalgoritmo