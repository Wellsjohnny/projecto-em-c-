#include<stdlib.h>
#include<stdio.h> 
#include<locale.h>
#include<math.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float a,quad;
	 	printf("\Digite o numero:\n\n");
		scanf("%f",&a);
		quad= a*a;
		printf("\n O resultado da soma é %.2f:\n\n",quad);
		system("pause");
		return 0;
	}
