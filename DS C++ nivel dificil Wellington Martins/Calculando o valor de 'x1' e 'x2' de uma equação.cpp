#include<stdlib.h>
#include<stdio.h> 
#include<locale.h>
#include<math.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float A,B,C,Delta,x1,x2;
	 
		printf("\nCalculando o valor de 'x1' e 'x2' de uma equação\n\n");
		printf("\nDigite o valor de A:\n\n");
		scanf("%f",&A);
		printf("\nDigite o valor de B:\n\n");
		scanf("%f",&B);
		printf("\nDigite o valor de C:\n\n");
		scanf("%f",&C);
		Delta = pow(B,2) - 4*A*C;
		printf("\n O valor de Delta é\n\n:",Delta);
		if (Delta<0){
			printf("\n Erro\ !Não existe raiz para esse numero!!!\n\n");
		}
		else{
			x1 = (-B + sqrt(Delta))/(2*A);
			x2 = (-B - sqrt(Delta))/(2*A);
		}
		printf("\nValor de x1 %f é:\n\n",x1);
		printf("\nValor de x2 %f é:\n\n",x2);
	   	system("pause");
		return 0;
	}
