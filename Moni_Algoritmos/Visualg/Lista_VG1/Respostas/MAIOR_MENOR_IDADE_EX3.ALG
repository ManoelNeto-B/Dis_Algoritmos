Algoritmo "Maior_Menor_Idade_EX3"
// Disciplina   : [Monitoria de algoritmo]
// Professor   : Laysa Mabel
// Descri��o   : Calcula a idade e informa se � de maior
// Autor(a)    : Manoel Neto
// Data atual  : 26/04/2025
Var
   ano, ano_atual, idade: inteiro


Inicio
   escreval(">>Informe o ano de seu nascimento e o ano atual<<")
   leia(ano, ano_atual)

   idade <- (ano_atual - ano)

   se ( idade >= 18) entao
      escreval(">>Sua idade � de:", idade, " anos, Portanto � de maior<<")
   senao
      escreval(">>Sua idade � de:", idade, " anos, Portanto n�o � de maior<<")
   fimse


Fimalgoritmo