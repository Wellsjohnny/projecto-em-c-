#include<stdlib.h>
#include<stdio.h> 
#include<locale.h>
#include<math.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float r,alt,b,tot,at;
	 
		printf("\nCalulo da area externa de uma lata\n\n");
		printf("\nDigite o valor do Raio:\n\n");
		scanf("%f",&r);
		printf("\nDigite o valor de B:\n\n");
		scanf("%f",&alt);
		b= 3.14* pow (r,2);
		at= 2*3.14*r*alt;
		tot= at + (b*2);
		printf("\n O resultado area externa da lata é de %f:\n\n",tot);
		system("pause");
		return 0;
	}
