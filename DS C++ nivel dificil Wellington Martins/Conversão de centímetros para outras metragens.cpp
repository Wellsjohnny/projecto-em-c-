#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float mt,dc,ml,cm;
		printf("\nConvers�o de cent�metros para outras metragens\n\n");
		printf("\nDigite um valor em cent�metros:\n\n");
		scanf("%f",&cm);
		mt= cm/100;
		dc= cm/10;
		ml= cm*10;
		printf ("\n A convers�o em metros � de %.2f metro(s)\n\n",mt);
		printf ("\n A convers�o em dec�metros � de %.2f dec�metro(s)\n\n",dc);
		printf ("\n A convers�o em mil�metros � de %.2f mil�metro(s)\n\n",ml);
		return 0;
	}
