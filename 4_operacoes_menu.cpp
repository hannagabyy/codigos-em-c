#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int op;/*op = operação*/
	float a,b,ad,sub,mult,div;/*adicao,subtraão...*/

	printf("Digite dois valores:\n");
	scanf("%d %d",&a ,&b);
	
	do {
		printf("Escolha uma das operações a seguir:\n");
		printf("1-Adição \n 2-Subtração \n 3-Multiplicação \n 4-Divisão\n");
		scanf("%d",&op);
		
		if(op==1){
			ad=a+b;
			printf("A adição é: %.2f\n",ad);
			
		}else if(op==2){
			sub = a-b;
			printf("A subtração é:%.2f\n",sub);
			
		}else if(op==3){
			mult= a*b;
			printf("A multiplicaçã é: %.2f\n",mult);
			
		}else if(op==4){
			div= a/b;
			printf("A divisão é:%.2f\n",div);
		}else {
			printf("Operação inválida.\n");
		}
	}while(op!=1  && op!=2 && op!=3 && op!=4);
	
	return 0;
}
