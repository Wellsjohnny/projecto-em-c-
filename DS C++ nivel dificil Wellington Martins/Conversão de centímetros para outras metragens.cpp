#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float mt,dc,ml,cm;
		printf("\nConversão de centímetros para outras metragens\n\n");
		printf("\nDigite um valor em centímetros:\n\n");
		scanf("%f",&cm);
		mt= cm/100;
		dc= cm/10;
		ml= cm*10;
		printf ("\n A conversão em metros é de %.2f metro(s)\n\n",mt);
		printf ("\n A conversão em decímetros é de %.2f decímetro(s)\n\n",dc);
		printf ("\n A conversão em milímetros é de %.2f milímetro(s)\n\n",ml);
		return 0;
	}
