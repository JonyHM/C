#include <stdio.h>

int main() {

	int n, i, j;
	
	printf("Insira a quantidade de numeros a serem verificados: ");
	scanf("%d", &n);
	printf("Insira dois numeros a serem verificados ")
	int fatorial(n){
		if(n==1 || n==0) return 1;
		else return n*fatorial(n-1);
	}
	printf("\nO fatorial de %d e %d\n", n, fatorial(n));
	return 0;
}
