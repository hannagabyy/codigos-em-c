#include <stdio.h>
#include <locale.h>

/*valor total de todas as mercadorias */
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float soma,valor,total;
	
	printf("Digite o total de mercadorias : ");
	scanf("%f",&total);
	
	soma=0;
	for(i=1;i<=total;i++){
		printf("Digite o valor da mercadoria %d :",i);
		scanf("%f",&valor); 
		
		soma= valor + soma;
	}
	printf("O valor do estoque � %.2f : ",soma);
	printf("A m�dia dos valores � %.2f : ",soma/total);
	
	return 0;
}
