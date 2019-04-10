#include<stdlib.h>
#include<stdio.h> 
#include<locale.h>
#include<math.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float r,res,area;
	 	printf("\Digite o valor do raio:\n\n");
		scanf("%f",&r);
		res= 3.14*(r*r);
		printf("\n O resultado da area é %.2f:\n\n",res);
		system("pause");
		return 0;
	}
