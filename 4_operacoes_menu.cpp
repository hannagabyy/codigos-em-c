#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int op;/*op = opera��o*/
	float a,b,ad,sub,mult,div;/*adicao,subtra�o...*/

	printf("Digite dois valores:\n");
	scanf("%d %d",&a ,&b);
	
	do {
		printf("Escolha uma das opera��es a seguir:\n");
		printf("1-Adi��o \n 2-Subtra��o \n 3-Multiplica��o \n 4-Divis�o\n");
		scanf("%d",&op);
		
		if(op==1){
			ad=a+b;
			printf("A adi��o �: %.2f\n",ad);
			
		}else if(op==2){
			sub = a-b;
			printf("A subtra��o �:%.2f\n",sub);
			
		}else if(op==3){
			mult= a*b;
			printf("A multiplica�� �: %.2f\n",mult);
			
		}else if(op==4){
			div= a/b;
			printf("A divis�o �:%.2f\n",div);
		}else {
			printf("Opera��o inv�lida.\n");
		}
	}while(op!=1  && op!=2 && op!=3 && op!=4);
	
	return 0;
}
