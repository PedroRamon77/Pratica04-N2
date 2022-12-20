#include <stdio.h>
#include <locale.h>

int soma(int a, int b){
	return a+b;
}
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int r,a,b;
	
	printf("Somatorio\n\n");
	printf("Digite o valor de A: ");
	scanf("%d",&a);
	printf("Digite o valor de B: ");
	scanf("%d",&b);
	
	r=soma(a,b);
	
	printf("\nSoma de %d + %d = %d\n",a,b,r);
	
	return 0;
}

