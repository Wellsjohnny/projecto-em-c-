#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 19");
	float l1,l2,res; 
		printf("\nVamos calcular a area de um tri�ngulo\n\n");
		printf("\nDigite o valor de um dos lados:\n\n");
		scanf("%f",&l1);
		printf("\nDigite o valor do outro lado: \n\n");
		scanf("%f",&l2);
		res= pow (l1*l2,2);
		printf ("A �rea do tri�ngulo � de %.2f quadrados",res);
		return 0;
}

