#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int anos = 0;
	float popA = 5000000, popB = 7000000;
	float cresA = 0.03, cresB = 0.02;
	
	for (anos = 0; popA < popB; anos++) {
		
		popA = popA + (popA * cresA);
		popB = popB + (popB * cresB);
		
	}
	printf("Apos %d anos o pa�s A ultrapassou o pa�s B em n�mero de habitantes.\n", anos);
	printf("Pais A: %0.f\n", popA);
	printf("Pa�s B: %0.f", popB);
	
	return 0;
	
}
