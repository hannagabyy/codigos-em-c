#include <stdio.h>

/*le duas notas do aluno e da a media final*/
int main(){
	
	float nota1,nota2,media;
	
	printf("Insira as duas notas do aluno:\n");
	scanf("%f %f",&nota1,&nota2);
	
	media=(nota1+nota2)/2;
	
	
	if(media >=7)
		printf("A media final do aluno e: %.2f\n O aluno foi aprovado\n",media);
	else 
		printf("A media final do aluno e: %.2f\n O aluno foi Reprovado\n",media); 
	
	
	return 0;
}
