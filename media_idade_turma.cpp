#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int alunos,idade,i;
	float soma;
	
	
	printf("Digite Quantos alunos tem na sala:\n");
	scanf("%d",&alunos);
	
	
	for(i=1;i<=alunos;i++){
		printf("Digite a idade do aluno %d\n",i);
		scanf("%d",&idade);
		soma=soma+idade;
		
	}
	
	soma=soma/alunos;
	printf("A média de idade da turma é : %.2f",soma);
	
	
	return 0;
}
