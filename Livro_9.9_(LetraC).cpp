#include <stdio.h>
#include <locale.h>

int fatorial(int n){
	int fat=1;
	
	for(int i=n;i>1;i--){
		fat=fat*i;
	}
	return fat;
}

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int r,n;
	printf("Calculadora Fatorial\n\n\n");
	printf("Digite o número: ");
	scanf("%d",&n);
	r=fatorial(n);
	printf("\n\nFatorial de %d! = %d\n",n,r);
	
	return 0;
}
