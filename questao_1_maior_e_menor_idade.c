#include <stdio.h>
#include <locale.h>

//maior idade,menor idade,total de alunos mas e fem

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,maior,menor,idade,m,f;
	float aux;
	char c,op;
	
	maior=1;
	menor=1;
	m=0;
	f=0;
	
	do{
		i++;
		printf("Digite a idade do aluno %d :",i);
		scanf("%d",&idade); 
		  
		
		  
		if(maior==1){
			maior=idade;
		}
		if(maior<idade){
			maior=idade;
		}
		if(menor==1){
			menor=idade;
		}
		if(menor>idade){
			menor=idade;
		}
		
			
		printf("Digite o sexo do aluno : (F/M)");
		scanf(" %c",&c);
		
	    if(c=='f'){
		f++;
	
	 	}
	
		if(c=='m'){
		m++;
		
		}
	    
		
	printf("Deseja Continuar?(S/N)\n");
	scanf(" %c",&op);
		
	}while(op=='s');
	
	printf("******************************************************\n");
	printf("\tA maior idade entre os alunos é: %d \n",maior);
	printf("\tA menor idade entre os alunos: %d \n",menor);
	printf("\tO total de alunos do sexo feminino é :%d \n",f);
	printf("\tO total de alunos do sexo masculino é: %d \n",m);
	
	
	return 0;
}
