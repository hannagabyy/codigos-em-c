#include <stdio.h>

/*le e mostra na ordem crecente 3 numeros  inteiros*/

int main(){
	int a,b,c;
	
	printf("Digite 3 numeros inteiros:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c){
		if(b>c){
			printf("A ordem crescente eh:%d,%d e %d\n",c,b,a);
		}else{
			printf("A ordem crescente eh:%d,%d e %d\n",b,c,a);
		}
	}
	if(b>a && b>c){
		if(a>c){
			printf("A ordem crescente eh:%d,%d e %d\n",c,a,b);
		}else{
			printf("A ordem crescente eh:%d,%d e %d\n",a,c,b);
		}
	}
	if(c>a && c>b){
		if(a>b){
			printf("A ordem crescente eh:%d,%d e %d\n",b,a,c);
		}else{
			printf("A ordem crescente eh:%d,%d e %d\n",a,b,c);
		}
	}

	
	return 0;
}
