#include <stdio.h>

/*le tres numeros inteiros e diz qual o maior*/
int main(){
	int num1,num2,num3;
	
	printf("Digite 3 numeros inteiros distintos:\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if(num1>num2 && num1>num3){
		printf("O numero maior eh %d",num1);
	}
	
		if(num2>num1 && num2>num3){
		printf("O numero maior eh %d",num2);
	}
	
		if(num3>num1 && num3>num2){
		printf("O numero maior eh %d",num3);
	}
	
	return 0;
}
