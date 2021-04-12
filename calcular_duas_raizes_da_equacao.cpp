#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,delta,r1,r2 ;
	
	printf("Insira os 3 coeficientes da equação de segundo grau:\n");
	scanf("%f %f %f",&a, &b, &c);
	
	delta = (b*b) - (4*a*c);
	r1=(((-1)*b)+sqrt(delta))/2 * a;
	
	r2=(((-1)*b)-sqrt(delta))/2 * a;
	
	if(delta<0){
		printf("Essa equacao nao possui raiz");
	}
	if(delta ==0){
		printf("A raiz é %.2f",r1);
	}
	if(delta>0){
		printf("As raizes sao %.2f e %.2f\n",r1,r2);
	}
	return 0;
}
