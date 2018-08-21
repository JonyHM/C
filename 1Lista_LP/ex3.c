#include <stdio.h>

int main() {

	int n, i, c;
		
	printf("Insira um numero: ");
	scanf("%d", &n);
	
	i = 1;
	c = 1;
	
	while(c<=n){
		if(i % 2 != 0){
			printf("%d", i);
			
			if (c<n)printf(",");
			else printf("\n");
			
			c++;
		}
		i++;
	}
		
	return 0;
}
