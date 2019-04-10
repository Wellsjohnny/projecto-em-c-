#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 18");
	char name[10];
	float n1,n2,n3,n4,md; 
		printf("\nQual é o seu nome Aluno:\n\n");
		scanf("%s",&name);
		printf ("\nSeja bem vindo, %s\n\n",name);
		printf("\nDigite a sua 1a nota bimestral\n\n");
		scanf("%f",&n1);
		printf("\nDigite a sua 2a nota bimestral\n\n");
		scanf("%f",&n2);
		printf("\nDigite a sua 3a nota bimestral\n\n");
		scanf("%f",&n3);
		printf("\nDigite a sua 4a nota bimestral\n\n");
		scanf("%f",&n4);
		md= (n1+n2+n3+n4)/4;
		printf("\n O aluno %s alcançou a média %.2f\n\n",name,md);
		return 0;
}


 
