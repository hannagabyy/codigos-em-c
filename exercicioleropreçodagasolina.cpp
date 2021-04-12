/*Programa para ler o preço do litro da gasolina e o valor do pagamento*/

#include <stdio.h>
int main(){
	
	float reais;
	float gasolina;
	float litros;
	gasolina = 4.30;
	
	/*1L de gasolina = 4,30*/
	
	printf("Insira quantos reais de gasolina deseja colocar: \n");
	scanf("%f",&reais);	
	
	litros = reais/gasolina;
	
	printf(" *** Preco da gasolina :R$%.2f *** \n",gasolina);
	printf(" *** Valor do Pagamento :R$%.2f ***\n",reais);
	printf(" *** Litros Totais :%.2fL ***\n",litros);
	
	return 0;
}
