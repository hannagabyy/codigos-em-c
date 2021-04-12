#include <stdio.h>
	int main(){
		  int a,b;
		  float resto;
		  
		  
		  printf("Digite dois numeros:\n");
		  scanf("%d %d",&a,&b);
		  resto=a%b;
		  
	if(resto==0){
		printf("Entao %d eh divisivel por %d\n",a,b);
	 }else{
	 	printf("Entao %d nao eh divisivel por %d\n",a,b);
	 }	  
		  
		return 0;
	}
