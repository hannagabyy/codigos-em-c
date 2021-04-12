#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");/*Acentuacao*/
	
	int a;

	
	do {
		printf("\nEscolha uma das opções abaixo:\n 1-Inclusao \n 2-Exclusão\n 3-Sair\n");
	    scanf("%d",&a);
		if(a==1){
			printf("\n Seu pedido foi incluso \n");
		}else if(a==2){
			printf("\n Seu pedido foi Excluido \n");
		}else if(a==3){
			printf("\n Seu pedido foi fechado \n");
		}else{
			printf("Comando inválido");
		}
		
		
	}while(a!=3);
	
	return 0;
}
