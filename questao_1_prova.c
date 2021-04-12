#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int pag;
	float valor,juros,valorf;
	
	printf("Preço do produto:\n ");
	scanf("%f",&valor);
	
	printf("Insira a forma de pagamento:\n ");
	printf(" 1-A vista\n");
	printf(" 2-Cartao de credito\n");
	printf(" 3-Pagamento em duas vezes\n");
	printf(" 4-Pagamento em tres vezes\n");
	scanf("%d",&pag);
	
	
	if(pag==1){
		valorf= valor - valor*15/100 ;
	}
	if(pag==2){
		valorf= valor - valor*10/100;
	}
	if(pag==3){
		valorf= valor;
	}
	if(pag==4){
		valorf=valor+ valor*5/100;
	}
	
	printf("O cliente ira pagar %.2f: ",valorf);
	
	
	return 0;
}
