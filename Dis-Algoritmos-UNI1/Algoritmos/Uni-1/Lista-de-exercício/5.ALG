Algoritmo "E tome c�digo EX7"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/01/2025
Var
   // Se��o de Declara��es das vari�veis
   I,A,QDP:inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   QDP := 0
   A   := 1
   I   := 1

   repita

      escreval("digite a idade da", A ,"pessoa")
      leia (I)
      QDP := QDP + 1

      se ( I >= 0 ) e ( I <= 12 ) entao
         escreval ("a pessoa",A,"� � crian�a")
         A := A + 1
      senao
         se ( I >= 13 ) e ( I <= 17) entao
            escreval("a pessoa", A," � � adolescente")
            A:= A + 1
         senao
            se ( I >= 18 ) e ( I <= 59 ) entao
               escreval("a pessoa", A ,"� � adulto")
               A := A + 1
            senao
               escreval("A pessoa", A,"� � idoso")
               A:= A+1
        fimse
          fimse
             fimse
             
      ate ( I < 0 )
      
       escreval(" a quantidade de pessoas � ", QDP)
Fimalgoritmo