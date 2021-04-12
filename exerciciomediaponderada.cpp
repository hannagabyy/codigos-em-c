/*leia as 3 notas de um aluno e calcule a média final(media ponderada) deste aluno */

#include <stdio.h>
int main(){
	
	float nota1,nota2,nota3,media;
	int peso1,peso2,peso3;
	peso1=2;
	peso2=3;
	peso3=5;
	int somaPesos;
	
	
	printf("Digite as 3 notas do aluno:\n");
	scanf("%f %f %f", &nota1,&nota2,&nota3);
	
	/* formula de media ponderada*/
	somaPesos= peso1+peso2+peso3;
	media=(nota1*peso1 +nota2*peso2 + nota3*peso3)/somaPesos;
	
	
	printf("A media final do aluno e : %.2f\n",media);
	
	
	return 0;
}

