#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 19");
	int n1,n2, res;
	printf("\nC�lculo para a soma de dois n�meros.\n\n\n");
	printf("\nDigite o primeiro n�mero:\n\n");
	scanf("%d",&n1);
	printf ("\nDigite o segundo n�mero:\n\n");
	scanf("%d",&n2);
	res=n1+n2;
	printf("\n \t\t O resultado da soma �:%d", res);
	return 0;
}

 
