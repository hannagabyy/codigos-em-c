#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,f,aux,z;
	aux=0;
	z=0;
	
	printf("Digite dois n�meros inteiros:");
	scanf("%d %d",&i,&f);
	
	if(i>f){
		aux=f;//valor antigo de f
		f=i;
		i=aux;
	}
	printf("Os n�meros:\n");
	for(z=i;z<=f;z++){
		
		if(z%2!=0){
			printf("%d  ",z);
		}
		
	}
		printf("\nS�o �mpares!\n");
		printf("\n Programa Finalizado!");
	
	return 0;
}
