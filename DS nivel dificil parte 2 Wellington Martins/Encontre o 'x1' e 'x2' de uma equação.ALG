Algoritmo "Encontre o 'x1' e 'x2' de uma equação"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2019
Var
// Seção de Declarações das variáveis
a,b,c,d,x1,x2 : real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval ("******************************************************************")
escreval ("*********Calculando o valor de 'x1' e 'x2' de uma equação*********")
escreval ("******************************************************************")
escreval ("******************************************************************")
escreval ("")
escreval ("digite o valor de A")
leia (a)
escreval ("digite o valor de B")
leia (b)
escreval ("digite o valor de C")
leia (c)
d <-(b^2)-(4*a*c)
se (d<0)entao
escreval ("Erro/ Não possui raiz real")
senao
x1 <-((-b)+raizq(d))/(2*a)
x2 <-((-b)-raizq(d))/(2*a)
escreval ("")
escreval ("Valor de x1 é,", x1)
escreval ("Valor de x2 é,", x2)
fimse
Fimalgoritmo