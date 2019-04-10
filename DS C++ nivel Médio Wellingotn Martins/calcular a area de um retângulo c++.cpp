#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 19");
	float b,a,resp; 
		printf("\nVamos calcular a area de um retângulo\n\n");
		printf("\nDigite o valor da base:\n\n");
		scanf("%f",&b);
		printf("\nDigite o valor da altura: \n\n");
		scanf("%f",&a);
		resp= pow (b*a,2);
		printf ("A área do retângulo é %.2f",resp);
		return 0;
}


 
