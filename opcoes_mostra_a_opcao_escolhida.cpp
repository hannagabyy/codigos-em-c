#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int op;/*op = operação*/
	
	
	do {
		printf("------Escolha uma das opções a seguir:-----\n");
		printf(" 1-Cadastrar  \n 2-Alterar \n 3-Excluir \n 4-Sair \n");
		scanf("%d",&op);
		
		if(op==1){
			printf("Opção Cadastrar");
			
		}else if(op==2){
			printf("Opção Alterar");
			
		}else if(op==3){
			printf("Opção Excluir");
			
		}else if(op==4){
			printf("**Encerrar Programa**");
			
		}else {
			printf("Operação inválida.\n");
		}
	}while(op!=1  && op!=2 && op!=3 && op!=4);
	
	return 0;
}
