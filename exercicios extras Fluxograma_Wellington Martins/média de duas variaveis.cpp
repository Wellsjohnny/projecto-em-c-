#include<stdlib.h>
#include<stdio.h> 
#include<locale.h>
#include<math.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float a,b,m;
	 	printf("\nDigite um valor para a variavel 'a':\n\n");
		scanf("%f",&a);
		printf("\nDigite um valor para a variavel 'b':\n\n");
		scanf("%f",&b);
		m=(a+b)/2;
		printf("\nA média dos valores é: %.2f:\n\n",m);
		system("pause");
		return 0;
	}
