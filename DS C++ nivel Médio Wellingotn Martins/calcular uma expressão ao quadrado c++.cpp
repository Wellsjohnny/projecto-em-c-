#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 19");
	float x,n,calc;
	printf("\nvamos calcular uma expressão ao quadrado\n\n\n");
	printf("\nDigite um valor:\n\n");
	scanf("%f",&x);
	printf ("\nDigite outro valor:\n\n");
	scanf("%f",&n);
	calc= pow (x*n,2);
	printf("\n \t\t O resultado do cálculo é:%.2f", calc);
	return 0;
}

 
