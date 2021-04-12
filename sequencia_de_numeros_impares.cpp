#include <stdio.h>

int main(){
	int i,a;
	
	
	printf("Insira a sequencia de numeros impares desejada\n");
	scanf("%d",&a);
	
	for(i=1;i<=a;i=i+2){
		printf("%d\t ",i);
	}
	return 0;
}
