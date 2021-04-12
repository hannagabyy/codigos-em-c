/*leia o custo de fábrica de um carro e escreva o custo ao consumidor*/

#include <stdio.h>
int main(){

	double custoConsumidor,custoFabrica;
	float percDistribuidor,percImpostos;
	/*percentagem do distribuidor =28% \ percentagem dos impostos=45% */
	
	printf("Informe o custo de Fabrica do carro:\n");
	scanf("%lf",&custoFabrica);
	
	percDistribuidor= custoFabrica *28/100;
	percImpostos =custoFabrica *45/100;
	
	custoConsumidor = custoFabrica + percDistribuidor + percImpostos;
	
	printf("O custo ao consumidor de um carro novo e R$%.2lf\n",custoConsumidor);

	return 0;
}
