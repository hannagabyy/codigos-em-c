#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float nota1,nota2,media;
	int i,peso1,peso2,somaPesos;
	peso1=1;
	peso2=2;
	char nome[100];
	i=1;
	
	
	
	while(i<=3){
		
		printf("  Digite o nome do aluno:\n");
		scanf("%s",&nome);
	
		
		printf("  Digite duas notas do aluno:\n");
		scanf("%f %f",&nota1,&nota2);
		
		somaPesos= peso1+peso2;
		media=(nota1*peso1 +nota2*peso2 )/somaPesos;
		
		printf("  A média final do aluno(a) %s é :%.2f\n",nome,media);
		printf("\n************************************\n");
		
		
		i++;
	}
     
	
	
	
	return 0;
}

