#include <stdio.h>
#include <locale.h>

/*media de filhos e de salario dos habitantes*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;/*perc=percentual*/
	float sal,somah,somaf,mhab,mfil,aux,hab,filhos,perc=0;
	
	/* soma habitantes,soma fil ,media habitantes, media filho */
	
	
	
	printf("Insira a quantidade de habitantes:");
	scanf("%f",&hab);
	
	for(i=1;i<=hab;i++){
		printf("Digite o salario do habitante %d: ",i);
		scanf("%f",&sal);
	
		somah = sal+somah;
		
		if(sal>aux){
			aux=sal;
		}
		
		printf("Quantidade de filhos: ");
		scanf("%f",&filhos);
		
		somaf=filhos+somaf;
		
		if(sal<600){
		perc++;
		
		}
	}
	
	
	printf("**************************************\n");
	
	mhab= somah/hab;
	mfil= somaf/filhos;
	
	printf("A m�dia de s�larios da popula��o �: %.2f\n",mhab);
	printf("A m�dia de filhos da popula��o �: %.2f\n",mfil);
	printf("Maior sal�rio dos habitantes: %.2f\n",aux);
	printf("O percentual de habitantes com sal�rio menor que 600 �:  %.2f\n",perc/hab);
	
	return 0;
}
