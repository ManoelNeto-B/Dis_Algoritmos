Algoritmo "EX5-2"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 21/01/2025
Var
   // Se��o de Declara��es das vari�veis
   S,SP : real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Digite seu sal�rio")
   leia (S)

   se ( S < 2000 ) entao
      SP := ( S * 15 ) / 100
      escreval("seu sal�rio sem reajuste �: R$", S)
      escreval("seu sal�rio com reajuste �: R$", SP)
   senao
      se ( S >= 2000 ) e ( S < 5000 ) entao
         SP := ( S * 10 ) / 100
         escreval("seu sal�rio sem reajuste �: R$", S)
         escreval("seu sal�rio com reajuste �: R$", SP)
      senao
         se ( S >= 5000 ) entao
            SP := ( S * 5 ) / 5
            escreval("seu sal�rio sem reajuste �: R$", S)
            escreval("seu sal�rio com reajuste �: R$", SP)
         fimse
      fimse
   fimse



Fimalgoritmo