#include <stdio.h>

int main() {

	int n, x, i;
		
	printf("Insira X e N: ");
	scanf("%d %d", &x, &n);
	
	
	for (i = 0; i < n; i++) x = x * n;
	
	printf("\nResultado: %d\n", x);
	
	return 0;
}
