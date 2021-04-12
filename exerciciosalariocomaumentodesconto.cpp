/*para ler o salario de um funcionário e aumenta-Io em 15%.
Apos o aumento, desconte 8% de impostos.*/

#include <stdio.h>
int main(){
	
	float salario,salarioAumento,salarioFinal;
	
	printf("informe o salario do funcionario \n");
	scanf("%f",&salario);
	
	/*aumento do salario em 15% */
	salarioAumento= salario * 1.15;
	
	
	/*desconto do salario de 8% */
	salarioFinal= salarioAumento * 0.92;
	
	printf("****Salario inicial:%.2f ****\n",salario);
	printf("****Salario Com Aumento de 15% : %.2f ****\n",salarioAumento);
	printf("****Salario Final:R$%.2f ****\n",salarioFinal);
	
	return 0;
}
