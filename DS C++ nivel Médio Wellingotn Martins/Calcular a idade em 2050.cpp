#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	int an,aa,ia,id2050; 
		printf("\nPrograma para calcular a idade em 2050.\n\n");
		printf("\nDigite o ano em que nasceu:\n\n");
		scanf("%d",&an);
		printf("\nDigite o ano atual:\n\n");
		scanf("%d",&aa);
		ia= aa-an;
		id2050= 2050-an;
		printf ("\nA sua idade atual é %d anos\n\n",ia);
		printf ("A sua idade em 2050 será %d anos\n\n",id2050);
		return 0;
	}
