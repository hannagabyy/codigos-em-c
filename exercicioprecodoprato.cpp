/*Ler o peso do prato montado pelo cliente (em quilos) e imprimir o valor a pagar.*/

#include <stdio.h>

int main(){
	float pesoPrato,precoPrato;
	int quilo=35;
		
	
	printf("Insira quantos quilos tem seu prato: \n");
	scanf("%f",&pesoPrato);
	
	/*o quilo do prato é 35 reais */
	precoPrato= pesoPrato * quilo;
	
	printf("O preco do seu prato e : R$%.2f",precoPrato);
		return 0;
}
