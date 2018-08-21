#include <stdio.h>

int main() {

	int n, i, s;

	printf("Insira um numero: ");
	scanf("%d", &n);
	
	s = 0;

	for(i = 0; i <= n; i++){
		s += i;
	}
	
	printf("\nSoma dos %d primeiros numeros naturais: %d\n", n, s);

	return 0;
}
