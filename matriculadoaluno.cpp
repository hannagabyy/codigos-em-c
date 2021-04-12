#include <stdio.h>

int main(){
	long int mat;
	

	printf("Insira a matricula do aluno:\n");
	scanf("%li",&mat);
	
	if(mat==04266 || mat==04277 || mat==04255 ){
		printf("O aluno esta matriculado\n");
	}else{
		printf("O aluno nao esta matriculado\n");
	}
	
	return 0;
}
