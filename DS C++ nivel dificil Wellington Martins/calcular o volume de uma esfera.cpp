#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float d=4.0, pi=3.14, r,v,res;
		printf("\ncalcular o volume de uma esfera pelo R (raio)\n\n");
		printf("\nDigite o valor de R (raio):\n\n");
		scanf("%f",&r);
		v= pow (r,3);
		res= (d*pi*v)/3;
		printf ("\n O volume da esfera é de %.2f cm³\n\n",res);
		return 0;
	}
