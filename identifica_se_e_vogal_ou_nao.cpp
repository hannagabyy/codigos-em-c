#include <stdio.h>

int main(){
	
	char c;
	int i;
	
	printf("Digite um caractere:\n");
	scanf("%c",&c);
	
	
	/*switch(c){
		case 65:
		case 69:
		case 73:
		case 79:
		case 85:
			printf("Voce digitou uma vogal\n");
			break;
		default:printf("Voce digitou uma consoante\n");	
		}*/

	if(c==65 || c==69 || c==73 || c==79 ||c==85){
	 	printf("Voce digitou uma vogal\n");
	}else {
		printf("Voce digitou uma consoante\n");
	}
	
	return 0;
}
