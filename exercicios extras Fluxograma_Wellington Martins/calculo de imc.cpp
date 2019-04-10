#include<stdlib.h>
#include<stdio.h> 
#include<locale.h>
#include<math.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float peso,altura,imc;
	 	printf("\nDigite o seu peso:\n\n");
		scanf("%f",&peso);
		printf("\nDigite a sua altura :\n\n");
		scanf("%f",&altura);
		imc=peso/(altura*altura);
		printf("\nA Seu imc é igual a: %.2f:\n\n",imc);
		system("pause");
		return 0;
	}
