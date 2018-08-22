#include <stdio.h>

int main() {

	int n, i, j, k, c;
	
	printf("Insira a quantidade de numeros a serem verificados: ");
	scanf("%d", &n);
	printf("Insira dois numeros a serem verificados: ");
	scanf("%d %d", &i, &j);
	
	printf("\n0");
	c = 1;
	
	for(k=2; c<n; k++){
		if(k%i==0 || k%j==0){ 
			printf(",%d", k);
			c++;
		}
		else if(k%j==0){
			printf(",%d", k);
			c++;
		}
		else if(k%i==0){
			printf(",%d", k);
			c++;
		}
	}
	printf("\n\n");
	return 0;
}
