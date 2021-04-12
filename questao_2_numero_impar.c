#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,f,aux,z;
	aux=0;
	z=0;
	
	printf("Digite dois números inteiros:");
	scanf("%d %d",&i,&f);
	
	if(i>f){
		aux=f;//valor antigo de f
		f=i;
		i=aux;
	}
	printf("Os números:\n");
	for(z=i;z<=f;z++){
		
		if(z%2!=0){
			printf("%d  ",z);
		}
		
	}
		printf("\nSão ímpares!\n");
		printf("\n Programa Finalizado!");
	
	return 0;
}
