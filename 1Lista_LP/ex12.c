#include <stdio.h>

int main() {

	int n;
	
	printf("Insira um numero a ser verificado: ");
	scanf("%d", &n);

	int fibo(n){
		if(n>=3){
			return(fibo(n-1)+fibo(n-2));
		}else return 1;
		
	}
	
	printf("\nO %d item da sequencia de Fibonacci e %d\n", n, fibo(n));
	
	return 0;
}
