#include <stdio.h>

int main() {
	
	int n;
	printf("Insira um  numeros par ser multiplicado (0 finaliza): ");
	
	do{
		scanf("%d", &n);
		n = n * 2;
		printf("Quadrado: %d \n", n);
		printf("Insira outro numero (0 cancela): ");
	}while(n != 0);
	
	printf("\nFim\n");
	
	return 0;
}
