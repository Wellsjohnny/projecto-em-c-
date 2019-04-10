#include<stdlib.h>
#include<stdio.h> 
#include<locale.h>
#include<math.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float a,peri;
	 
		printf("\nDigite o valor do lado:\n\n");
		scanf("%f",&a);
		peri= 4*a;
		printf("\n O valor do perimetro é de %f:\n\n",peri);
		system("pause");
		return 0;
	}
