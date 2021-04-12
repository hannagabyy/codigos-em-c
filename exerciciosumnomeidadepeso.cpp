#include <stdio.h>
int main(){
	char nome,sexo;
	int idade;
	float peso;	
	
	printf("Informe seu nome,sexo,idade e peso\n");
	scanf("%s %c %d %f",&nome,&sexo,&idade,&peso);
	
	printf("Seus dados sao :\n nome:%c \n sexo :%c \n idade:%d \n peso : %f");
	
	return 0;
}
