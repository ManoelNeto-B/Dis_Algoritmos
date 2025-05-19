Algoritmo "Maior_Menor_Idade_EX3"
// Disciplina   : [Monitoria de algoritmo]
// Professor   : Laysa Mabel
// Descrição   : Calcula a idade e informa se é de maior
// Autor(a)    : Manoel Neto
// Data atual  : 26/04/2025
Var
   ano, ano_atual, idade: inteiro


Inicio
   escreval(">>Informe o ano de seu nascimento e o ano atual<<")
   leia(ano, ano_atual)

   idade <- (ano_atual - ano)

   se ( idade >= 18) entao
      escreval(">>Sua idade é de:", idade, " anos, Portanto é de maior<<")
   senao
      escreval(">>Sua idade é de:", idade, " anos, Portanto não é de maior<<")
   fimse


Fimalgoritmo