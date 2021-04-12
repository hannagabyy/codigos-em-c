#include <stdio.h>

int main(){
	float raio,peri,area;
	printf("Digite o raio:\n");
	scanf("%f",&raio);
	
	area= 3.14 *raio *raio;
	peri=2* 3.14*raio;
	
	printf("O perimetro %.6f \n A area eh %.6f",peri,area);
	return 0;
}
