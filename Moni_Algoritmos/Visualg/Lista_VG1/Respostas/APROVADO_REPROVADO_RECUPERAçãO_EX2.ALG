Algoritmo "Aprovado_Reprovado_Recuperação_EX2"
// Disciplina   : [Monitoria de algoritmo]
// Professor   : Laysa Mabel
// Descrição   : Informa de o aluno esta aprovado(a)
// Autor(a)    : Manoel Neto
// Data atual  : 26/04/2025
Var
   //
   n1, n2, n3, m : real

Inicio
   escreval(">>Informe as notas do aluno(a)<<")
   leia (n1,n2,n3)

   m <-(n1+n2+n3)/3

   se ( m >= 7)entao
      escreval("O aluno(a) está aprovado com média:", m)
   senao
      se ( m < 3) entao
         escreval("O aluno(a) está reprovado com média:", m)
      senao
         escreval ("O aluno(a) está em recuperação com média:", m)
      fimse
   fimse


Fimalgoritmo