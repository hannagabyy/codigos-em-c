#include <stdio.h>
#include <locale.h>

/*ler a mercadoria e perguntar e perguntar mais mercadoria */

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float soma,valor;
	char op;

	
	soma=0;
	do{
		printf("Digite o valor da mercadoria  : ");
		scanf("%f",&valor); 
		
		soma= valor + soma;
		i++;
		
		printf("Mais mercadorias?(S/N)");
		scanf(" %c",&op);
		
	}while(op=='s');
	
	
	printf("O valor do estoque é %.2f : ",soma);
	printf("A média dos valores é %.2f : ",soma/i);
	
	return 0;
}
