Algoritmo "M�dia_la�o_EX7"
// Disciplina   : Monitoria de algoritmo
// Professor   : Laysa Mabel
// Descri��o   : la�o de repeti��o
// Autor(a)    : Manoel Neto
// Data atual  : 27/04/2025
Var
cont, i, nd :inteiro
n1, n2, n3,soma, media :real


Inicio
i := 1
para cont de 1 ate 50 passo 1 faca
escreval(">>Informe as notas do ", i, "� aluno(a)")
leia (n1,n2,n3)
soma := (n1+n2+n3)
nd := nd + 3
i := i + 1
fimpara

media := soma/nd

escreval(">>A m�dia da turma foi :", media)




Fimalgoritmo