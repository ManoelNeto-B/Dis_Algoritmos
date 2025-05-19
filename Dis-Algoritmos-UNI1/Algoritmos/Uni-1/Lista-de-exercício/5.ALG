Algoritmo "E tome código EX7"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/01/2025
Var
   // Seção de Declarações das variáveis
   I,A,QDP:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   QDP := 0
   A   := 1
   I   := 1

   repita

      escreval("digite a idade da", A ,"pessoa")
      leia (I)
      QDP := QDP + 1

      se ( I >= 0 ) e ( I <= 12 ) entao
         escreval ("a pessoa",A,"º é criança")
         A := A + 1
      senao
         se ( I >= 13 ) e ( I <= 17) entao
            escreval("a pessoa", A," º é adolescente")
            A:= A + 1
         senao
            se ( I >= 18 ) e ( I <= 59 ) entao
               escreval("a pessoa", A ,"º é adulto")
               A := A + 1
            senao
               escreval("A pessoa", A,"º é idoso")
               A:= A+1
        fimse
          fimse
             fimse
             
      ate ( I < 0 )
      
       escreval(" a quantidade de pessoas é ", QDP)
Fimalgoritmo