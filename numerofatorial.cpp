#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int fat, n;
	printf("Insira um valor:\n ");
	scanf("%d", &n);
	 
	for(fat = 1; n > 1; n = n - 1)
	fat = fat * n;
	 
	printf("\nFatorial calculado: %d", fat);
	
	
		
	return 0;
}
