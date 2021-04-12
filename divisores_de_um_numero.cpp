#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int i,a;
	
	printf("Digite um número:\n");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		if(a%i==0){
			printf("%d\t",i);
		}
			
	}
	
	
	return 0;
}
