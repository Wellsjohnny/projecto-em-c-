#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 19");
	int n1,n2, res;
	printf("\nCálculo para a soma de dois números.\n\n\n");
	printf("\nDigite o primeiro número:\n\n");
	scanf("%d",&n1);
	printf ("\nDigite o segundo número:\n\n");
	scanf("%d",&n2);
	res=n1+n2;
	printf("\n \t\t O resultado da soma é:%d", res);
	return 0;
}

 
