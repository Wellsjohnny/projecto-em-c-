#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	float vh,ht,salb,salq;
	int dt; 
		printf("\ncalculo de salário liquido\n\n");
		printf("\nDigite o valor que recebe por hora:\n\n");
		scanf("%f",&vh);
		printf("\nDigite o valor total de horas que trabalhou:\n\n");
		scanf("%f",&ht);
		printf("\nDigite o numero de dependentes:\n\n");
		scanf("%d",&dt);
		salb= vh*ht;
		salq= (300*dt)+salb;
		printf ("\n O salário bruto do funcionario é R$%.2f\n\n",salb);
		printf ("\n Total de vencimentos é de R$%.2f\n\n",salq);
		return 0;
	}
