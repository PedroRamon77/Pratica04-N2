#include <stdio.h>
#include <locale.h>

char* isNegative(int n){
	if(n>=0){
		return "Falso";
	}
	return "Verdadeiro";
}

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int r,n;
	
	printf("Digite um número: ");
	scanf("%d",&n);
	char* b=isNegative(n);
	printf("\n\nO numero é negativo? %s\n",b);

	return 0;
}
