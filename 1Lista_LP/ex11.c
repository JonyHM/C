#include <stdio.h>

int main() {

	int n, i;
	
	printf("Insira um numero a ser verificado: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		if(i+(i+1)+(i+2)==n){ 
			printf("\nO numero %d e perfeito, pois %d+%d+%d = %d\n\n", n, i, i+1, i+2, n);
		}
	}
	
	return 0;
}