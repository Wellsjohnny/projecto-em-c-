algoritmo "conversão de centimetros para metros,decimetros e milimetros"
// Função :
// Autor :
// Data : 26/03/2019
// Seção de Declarações 
var
mt,dc,ml,cm:real
inicio
// Seção de Comandos 
escreval ("**********************")
escreval ("conversão de metragens")
escreval ("**********************")
escreval ("")
escreval ("Digite um valor em centimetros")
leia (cm)
mt<-cm/100
dc<-cm/10
ml<-cm*10
escreval ("A conversão em metros é,", mt, " em decimetros é,",dc, " e o valor em milimetros é," ,ml)
fimalgoritmo
