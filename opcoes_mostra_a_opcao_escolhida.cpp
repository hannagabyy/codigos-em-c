#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int op;/*op = opera��o*/
	
	
	do {
		printf("------Escolha uma das op��es a seguir:-----\n");
		printf(" 1-Cadastrar  \n 2-Alterar \n 3-Excluir \n 4-Sair \n");
		scanf("%d",&op);
		
		if(op==1){
			printf("Op��o Cadastrar");
			
		}else if(op==2){
			printf("Op��o Alterar");
			
		}else if(op==3){
			printf("Op��o Excluir");
			
		}else if(op==4){
			printf("**Encerrar Programa**");
			
		}else {
			printf("Opera��o inv�lida.\n");
		}
	}while(op!=1  && op!=2 && op!=3 && op!=4);
	
	return 0;
}
