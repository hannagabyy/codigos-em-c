#include <stdio.h>
#include <locale.h>

/*1) Ler 2 valores, calcular e escrever a
 soma dos inteiros existentes entre os 2 valores 
 lidos (incluindo os valores lidos na soma).
 Considere que o segundo valor lido poder� 
 ser maior ou menor que o primeiro valor maior ou menor que
 o primeiro valor lido, ou seja, deve se test�-los.*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a,b,i,soma,aux;
	
	printf("Digite dois n�meros:");
	scanf("%d %d",&a,&b);
	
	if(a>b){
		aux=a;
		a=b;
		b=aux;
	}
	
	soma=0;
	for(i=a;i<=b;i++){
	 soma=soma+1;
	}
	
	printf("O valor da soma � :%d",soma);
	
	return 0;
}
