#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float c,n,j,i,mont,rend; 
		printf("\ncálculo de rendimento bancário:\n\n");
		printf("\nDigite o valor do capital inicial:\n\n");
		scanf("%f",&c);
		printf("\nDigite o valor do percentual de juros mensal:\n\n");
		scanf("%f",&i);
		printf("\nDigite o Nº de meses investidos:\n\n");
		scanf("%f",&n);
		mont= (i/100)+1;
		j= pow (mont,n)*c;
		rend= j-c;
		printf ("\n O valor investido foi de R$ %.2f" " e o seu montante é de R$ %.2f" "\n Seu rendimento foi de R$ %.2f\n\n",c,j,rend);
		return 0;
	}
