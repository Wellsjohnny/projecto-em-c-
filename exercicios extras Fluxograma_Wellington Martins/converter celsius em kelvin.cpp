#include<stdlib.h>
#include<stdio.h> 
#include<locale.h>
#include<math.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float celsius,kelvin,fahrenheit;
	 
	 	printf("\ncelsius,kelvin,Fahrenheit:\n\n");
		printf("\nDigite a temperatura em celsius:\n\n");
		scanf("%f",&celsius);
		kelvin= celsius + 273.15;
		fahrenheit=(celsius*9/5)+32;
		printf("\nO valor em kelvin é%.2fK, e o valor em fahrenheit é %.2fF\n\n",kelvin,fahrenheit);
		system("pause");
		return 0;
	}
