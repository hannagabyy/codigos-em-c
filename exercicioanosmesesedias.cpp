/* Programa que le a idade da pessoa em anos meses e dias e ,mostre ela expressa em dias*/

#include <stdio.h>

int main(){
	
	int anos;
	int meses;
	int dias;
	int idade;
	
	/*1 ano(365 dias), 1 mes(60 dias)*/
	
	printf("Informe sua idade em anos, meses e dias:\n");
	scanf("%d %d %d",&anos,&meses,&dias );
	
	anos= anos*365;
	meses = meses * 30;
	
	idade= anos + meses +dias;
	
	printf("Sua idade em dias eh :%d dias",idade);
	
	return 0;
}
