#include <stdio.h>
#include <locale.h>

/*programa em c para ler o codigo e o pre�o de n produto*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,total;
	float valor,media,aux,soma;

	printf("Quantas mercadorias deseja cadastrar: ");
	scanf("%d",&total);
	
	for(i=1;i<=total;i++){
		printf("Insira o pre�o da mercadoria %d: ",i);
		scanf("%f",&valor);
		
		soma=valor+soma;
		
		if(valor>aux){
			aux=valor;
		}
	}
	
	media=soma/total;
	
	printf("O maior valor lido � : %.2f\n",aux);
	printf("A m�dia de valores � :%.2f",media);
	
	return 0;
}
