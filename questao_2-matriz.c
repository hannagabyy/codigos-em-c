#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a[10],x,i;
	
	
	
	printf("Digite 10 valores inteiros:\n");
	
	for(i=0;i<=9;i++){
		scanf("%d",&a[10]);
		
	}
		
		printf("Digite um valor para x: \n");
		scanf("%d",&x);
	
	
	for(i=0;i<=9;i++){
		if(i==x){
			printf("o valor %d pertence ao vetor a[%d]",x,i);
		}
	}
	
	
	return 0;
}
