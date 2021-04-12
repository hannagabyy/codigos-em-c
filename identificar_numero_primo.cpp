#include <stdio.h>

int main(){
	int a,i,res=0;
	
	printf("Digite um numero;\n");
	scanf("%d",&a);
	
	for(i=2; i<=a/2 ;i++){
		if(a%i==0){
			res++;
			break;
		}
	}
	if(res==0){
		printf("Esse eh um numero primo:\n");
	}else{
		printf("Esse nao eh um numero primo:\n");
	}
	
	return 0;
}
