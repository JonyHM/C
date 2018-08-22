#include <stdio.h>

int main() {

	int n, i;
	
	printf("\nInsira um numero a ser verificado: ");
	scanf("%d", &n);

	if(n%2==0&&n==2){ 
		printf("\nO numero %d e primo\n", n);
	}else if(n%2==0) printf("\nO numero %d nao e primo\n", n);
	else printf("\nO numero %d e primo\n", n);
	
	return 0;
}
