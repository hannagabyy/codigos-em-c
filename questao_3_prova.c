#include <stdio.h>

int main(){
	int n=5;
	int a=0,b,c;
	for( b=1;b<= n;b++)
		for( c=b;c<=n;c++){
			a=a+1;
		}
	
		printf("o valor de a eh %d",a);
		
		return 0;
}
