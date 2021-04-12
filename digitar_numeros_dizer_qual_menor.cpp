#include <stdio.h>
#include <locale.h>


int main (){
		setlocale(LC_ALL,"Portuguese");
	int q, i, num, menor;
	
	printf("Entre com a quantidade de numeros: ");
	scanf("%d", &q);
	
	for(i=1;i<=q;i++){
		printf("Digite um número:");
		scanf("%d",&num);
		
		if(i==1)
			menor=num;
		
		if(num<menor)
			menor=num;
		
	}

	printf("\nO menor numero é: %d", menor);
	
	return 0;
}
