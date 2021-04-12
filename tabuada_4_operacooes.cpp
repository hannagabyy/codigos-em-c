#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int a,i;
	a=4;
	
	
	for(i=0;i<=10;i++){
		printf("%d + %d = %d \n",i,a,i+a);	
	}
	
	for(i=0;i<=10;i++){
		printf("%d - %d = %d \n ",i,a,i-a);
	}
	for(i=0;i<=10;i++){
		printf("%d x %d = %d\n",i,a,i*a);

	}
	
	for(i=0;i<=10;i++){
		
		printf("%d / %d = %d\n",i,a,i/a);
	
	}
	
	
	
	return 0;
}
