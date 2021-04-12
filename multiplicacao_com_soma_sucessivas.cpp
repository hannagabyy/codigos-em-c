#include <stdio.h>
#include <locale.h>


int main (){
		setlocale(LC_ALL,"Portuguese");
		
	int num1, num2, i;
	
	printf("Entre com o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Entre com o segundo numero: ");
	scanf("%d", &num2);
	
	i = num1;
	
	do {
	i = i + num1;
	}
	
	 while(i < num2*num1);
	printf("\nO resultado e: %d", i);
	
	return 0;
		return 0;
}
