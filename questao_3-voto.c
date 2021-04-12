#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


/*3) Existem tr�s candidatos a uma vaga no Senado. O voto de cada eleitor foi codificado da seguinte forma:
1 - Voto para o candidato 1
2 - Voto para o candidato 2
3 - Voto para o candidato 3
0 - Voto branco
4 - Voto nulo
Deseja-se saber:
- O n�mero do candidato vencedor;
- O n�mero de votos em branco;
- O n�mero de votos nulos;
- O n�mero de eleitores que compareceram �s urnas.
Construa um programa que execute esta tarefa, sabendo que o voto de cada eleitor � lido. O voto finalizador tem c�digo �1, e n�o deve ser computado*/


int main(){
	setlocale(LC_ALL,"Portuguese");
	int voto,i,c1,c2,c3,c4,c5; //c4= voto branco, c5=voto nulo;
	voto=0;
	c1=0;
	c2=0;
	c3=0;
	
	
	do{
	
	printf("1 - Para votar no candidato 1\n");
	printf("2 - Para votar no candidato 2\n");
	printf("3 - Para votar no candidato 3\n");
	printf("4 - Voto branco\n");
	printf("5 - Voto nulo\n");
	printf("-1 - Encerrar a vota��o\n");
	
	printf("**************************************\n");
	
	printf("Insira seu voto:\n");
	scanf("%d",&voto);
	
	if(voto==1){ 
		c1++;
	}else if(voto==2){
		c2++;
	}else if(voto==3){
		c3++;
	}else if(voto==4){
		c4++;
	}else if(voto==5){
		c5++;
	}else if(voto== -1){
		printf("A vota��o foi encerrada!!!\n");
	}else {
		printf("Op��o inv�lida\n");
	}
	
	printf("##Voto computado!## \n"); 
	
	system("cls");
	
    }while(voto!=(-1));
	 
	 
	
	if(c1>c2 && c1>c3){
		printf("O candidado Vencedor � o candidato 1 com %d votos.\n",c1);
    }
    if(c2>c1 && c2>c3){
		printf("O candidado Vencedor � o candidato 2 com %d votos.\n",c2);
    }
    if(c3>c1 && c3>c2){
		printf("O candidado Vencedor � o candidato 3 com %d votos.\n",c3);
    }
    
    printf("Com %d votos nulos.\n",c5);
    printf("E %d votos em branco.\n",c4);
	
	
	
	
	
	return 0;
}
