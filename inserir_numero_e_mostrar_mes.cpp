#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");/*Acentuacao*/
	
	int mes;
	
	printf("Digite um numero:\n");
	scanf("%d",&mes);
	
	
	switch(mes){
		case 1:printf("Esse n�mero corresponde ao m�sde Janeiro\n");
			break;
		case 2:printf("Esse n�mero corresponde ao m�sde Fevereiro\n");
			break;
		case 3:printf("Esse n�mero corresponde ao m�sde Mar�o\n");
			break;
		case 4:printf("Esse n�mero corresponde ao m�sde Abril\n");
			break;
		case 5:printf("Esse n�mero corresponde ao m�sde Maio\n");
			break;
		case 6:printf("Esse n�mero corresponde ao m�sde Junho\n");
			break;
		case 7:printf("Esse n�mero corresponde ao m�sde Julho\n");
			break;
		case 8:printf("Esse n�mero corresponde ao m�sde Agosto\n");
			break;
		case 9:printf("Esse n�mero corresponde ao m�sde Setembro\n");
			break;
		case 10:printf("Esse n�mero corresponde ao m�sde Outubro\n");
			break;
		case 11:printf("Esse n�mero corresponde ao m�sde Novembro\n");
			break;
		case 12:printf("Esse n�mero corresponde ao m�sde Dezembro\n");
			break;
		default:printf("M�s Inv�lido");
			break;
		
	}
	
	return 0;
}
