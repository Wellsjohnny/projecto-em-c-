#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	int min,hor,seg;
		printf("\nConvers�o de segundos em horas e minutos\n\n");
		printf("\nEscreva um valor em segundos:\n\n");
		scanf("%d",&seg);
		hor=seg/3600;
		min=seg/60;
		printf ("\n O resultado � %d hora(s) e em minutos � %d minuto(s)\n\n",hor,min);
		return 0;
	}
