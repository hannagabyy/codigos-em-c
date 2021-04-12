#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a[10],x,i,b;
	
	
	printf("Digite 10 valores inteiros:\n");
	
	for(i=0;i<=9;i++){
		scanf("%d",&a[10]);
		
	}
		
		printf("Digite um valor: \n");
		scanf("%d",&x);
	
	b=0;
	for(i=0;i<=9;i++) {
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
		if(a[i]==x){
			b=1;
	}
	}
	if(b==1){
		printf("ACHEI");
	}
	else{
		printf("NÃO ACHEI");
	}
	
	
	return 0;
}
