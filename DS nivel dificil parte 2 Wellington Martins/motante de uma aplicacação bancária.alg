algoritmo "montante de uma aplica��o banc�ria"
// Fun��o :
// Autor :
// Data : 26/03/2019
// Se��o de Declara��es 
var
i,j,c,m,r: real
n :inteiro
inicio
// Se��o de Comandos 
escreval ("******************************")
escreval ("c�lculo de rendimento banc�rio")
escreval ("******************************")
escreval ("")
escreval ("Digite o valor do capital inicial")
leia (c)
escreval ("Digite o valor do percentual de juros mensal")
leia (j)
escreval ("Digite o N�de meses investidos")
leia (n)
m <- (j/100)+1
i <- (m^n)*c
r <- (i-c)
escreval ("O valor investido foi de R$",c:8:2, " e o seu montante � de R$", i:8:2)
escreval ("Seu rendimento foi de R$",r:8:2)
fimalgoritmo
