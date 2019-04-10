algoritmo "montante de uma aplicação bancária"
// Função :
// Autor :
// Data : 26/03/2019
// Seção de Declarações 
var
i,j,c,m,r: real
n :inteiro
inicio
// Seção de Comandos 
escreval ("******************************")
escreval ("cálculo de rendimento bancário")
escreval ("******************************")
escreval ("")
escreval ("Digite o valor do capital inicial")
leia (c)
escreval ("Digite o valor do percentual de juros mensal")
leia (j)
escreval ("Digite o Nºde meses investidos")
leia (n)
m <- (j/100)+1
i <- (m^n)*c
r <- (i-c)
escreval ("O valor investido foi de R$",c:8:2, " e o seu montante é de R$", i:8:2)
escreval ("Seu rendimento foi de R$",r:8:2)
fimalgoritmo
