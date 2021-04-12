#include <stdio.h>
 int main(){
 	int i;
 	
 	printf("Digite um numero interiro positivo:\n");
 	scanf("%d",&i);
 	
 	switch (i){
 		case 1 :printf("um \n");
 		break;
 		case 2 :printf("dois \n");
 		break;
 		case 3 :printf("tres \n");
 		break;
 		case 4 :printf("quatro \n");
 		break;
 		case 5 :printf("cinco\n");
 		break;
 		case 6 :printf("seis \n");
 		break;
 		case 7 :printf("sete \n");
 		break;
 		case 8 :printf("oito \n");
 		break;
 		case 9 :printf("nove \n");
 		break;
 		case 10 :printf("dez \n");
 		break;
 	
 		default:printf("Numero invalido\n");
 		break;
	 }
 	return 0;
 }
