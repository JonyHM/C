#include <stdio.h>

int main() {

	int n;
	
	printf("Insira um numero para descobrir seu fatorial: ");
	scanf("%d", &n);
		
	int fatorial(n){
		if(n==1 || n==0) return 1;
		else return n*fatorial(n-1);
	}
	printf("\nO fatorial de %d e %d\n", n, fatorial(n));
	return 0;
}
