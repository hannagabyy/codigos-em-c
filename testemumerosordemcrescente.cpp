#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("Digite 3 numeros inteiros:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	
	if(a>b>c){
		printf("Do menor pro maior eh %d %d e %d",a,b,c);
	}
	if(b>a>c){
		printf("Do menor pro maior eh %d %d e %d",b,a,c);
	}
	if(c>a>b){
		printf("Do menor pro maior eh %d %d e %d",c,a,b);
	}
	
	return 0;
}
