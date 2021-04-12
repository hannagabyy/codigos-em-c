#include <stdio.h>
#include <locale.h>


int main (){
		setlocale(LC_ALL,"Portuguese");
		
	int qteNum, i, num, soma = 0, produto = 1;
	
	printf("Entre com a quantidade de numeros: ");
	scanf("%d", &qteNum);
	
	for (i = 1; i <= qteNum; i++) {
		
	printf("Entre com um numero: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
	soma = soma + num;
	} else {
	
	}
	}
	printf("A soma dos pares e: %d", soma);
	printf("\nO produto dos impares e: %d", produto*num);
			
		
		return 0;
}
