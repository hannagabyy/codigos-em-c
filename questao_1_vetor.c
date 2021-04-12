#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	int x[10],i;
	
	
	printf("Digite 10 valores inteiros:\n");
	
	for (i=0;i<=9;i++)
	scanf("%d",&x[i]);
	
	for(i=9;i>=0;i--)
	printf(" %d",x[i]);
		
	return 0;
}
