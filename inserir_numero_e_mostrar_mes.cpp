#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");/*Acentuacao*/
	
	int mes;
	
	printf("Digite um numero:\n");
	scanf("%d",&mes);
	
	
	switch(mes){
		case 1:printf("Esse número corresponde ao mêsde Janeiro\n");
			break;
		case 2:printf("Esse número corresponde ao mêsde Fevereiro\n");
			break;
		case 3:printf("Esse número corresponde ao mêsde Março\n");
			break;
		case 4:printf("Esse número corresponde ao mêsde Abril\n");
			break;
		case 5:printf("Esse número corresponde ao mêsde Maio\n");
			break;
		case 6:printf("Esse número corresponde ao mêsde Junho\n");
			break;
		case 7:printf("Esse número corresponde ao mêsde Julho\n");
			break;
		case 8:printf("Esse número corresponde ao mêsde Agosto\n");
			break;
		case 9:printf("Esse número corresponde ao mêsde Setembro\n");
			break;
		case 10:printf("Esse número corresponde ao mêsde Outubro\n");
			break;
		case 11:printf("Esse número corresponde ao mêsde Novembro\n");
			break;
		case 12:printf("Esse número corresponde ao mêsde Dezembro\n");
			break;
		default:printf("Mês Inválido");
			break;
		
	}
	
	return 0;
}
