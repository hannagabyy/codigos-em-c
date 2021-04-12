#include <stdio.h>
/*programa que le o numero de matricula e informa seu usuario de estiver matriculado*/

int main(){
	long int mat;
	
	
	printf("Digite a matricula do aluno(a):\n");
	scanf("%li",&mat);
	
	switch(mat){
		case 42066 : printf("O aluno(a) Ana esta matriculado em programacao 2.\n");
		break;
		case 42417 : printf("O aluno(a) Camila esta matriculado em programacao 2.\n");
		break;
		case 44605 : printf("O aluno(a) Leo esta matriculado em programacao 2.\n");
		break;
		case 44635 : printf("O aluno(a) Joao esta matriculado em programacao 2.\n");
		break;
		default: printf("Este aluno nao esta matriculado em programacao 2");
		break;
	}
	
	return 0;
}
