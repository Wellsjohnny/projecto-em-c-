#include<stdlib.h>
#include<stdio.h> 
#include<locale.h>
#include<math.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float a,b,res;
	 	
	 	printf("\somando 2 valores\n\n");
		printf("\nDigite o primeiro valor:\n\n");
		scanf("%f",&a);
		printf("\nDigite o primeiro valor:\n\n");
		scanf("%f",&b);
		res= a+b;
		printf("\n O resultado da soma é %.2f:\n\n",res);
		system("pause");
		return 0;
	}
