#include <stdio.h>
#include <locale.h>	

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	float notaA, notaB, media;
	int peso1 = 1, peso2 = 2, i = 1;
	char nome[20], cont;
	int qteAlunos;
	
	printf("Entre com a quantidade de alunos: ");
	scanf("%d", &qteAlunos);
	
	while (i <= qteAlunos){
	printf("\nEntre com o nome do aluno: ");
	scanf("%s", &nome);
	
	do{
	printf("\nEntre com a primeira nota: ");
	scanf("%f", &notaA);
	
	if (notaA > 10 || notaA < 0) {
	printf ("\nERRO: Nota invalida! Digite novamente a nota.\n");
	printf("\n------------------------------------------------\n");
	}
	
	} while (notaA > 10 || notaA < 0);
	
	do {
	printf("\nEntre com a segunda nota: ");
	scanf("%f", &notaB);
	
	if (notaB > 10 || notaB < 0) {
	printf ("\nERRO: Nota invalida! Digite novamente a nota.\n");
	printf("\n------------------------------------------------\n");
	 } 
	} 
	
	while (notaB > 10 || notaB < 0);
	
	media = (notaA*peso1 + notaB*peso2) / (peso1 + peso2);
	printf("\nA media ponderada do aluno %s e: %.2f.\n", nome, media);
	printf("\n------------------------------------------------\n");
	i++;
	
	if (i > qteAlunos) {
	printf("\n Deseja continuar (s/n): ");
	scanf ("%s", &cont);
	
	if (cont == 's'){
	i--;
	}
	}
	}
return 0;
}

