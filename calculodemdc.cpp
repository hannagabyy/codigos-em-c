/*Primeiro programa em c - Calculo de mdc */

#include <stdio.h>
int main(){
	int m =84;
	int n =41;
	int x,y,r;
	x=m;
	y=n;
	do{
		r= x % y;
		x=y;
		y=r;
	}
	while(r!=0);
	
	printf("O MDC entre %d e %d eh:%d\n",m,n,x);
	
	return 0;
}
