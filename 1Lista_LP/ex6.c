#include <stdio.h>

int main() {

	int n, x, soma, i;
		
	printf("Insira N: ");
	scanf("%d", &n);
	
	
	for (i = 0; i < n; i++){
		printf("Insira um numero inteiro: ");
		scanf("%d", &x);
		if(x % 2 == 0){
			soma += x;
		}
	}
	
	printf("\nResultado: %d\n", soma);
	
	return 0;
}
