#include <stdio.h>

int main() {

	int n, o, p;
	
	printf("Insira tres numeros: ");
	scanf("%d %d %d", &n, &o, &p);

	if(n>o && n>p){
		if(o>p) printf("\n\n%d, %d, %d\n\n", p, o, n);
		else printf("\n\n%d, %d, %d\n\n", o, p, n);
	}else if(o>n && o>p){
		if(n>p) printf("\n\n%d, %d, %d\n\n", p, n, o);
		else printf("\n\n%d, %d, %d\n\n", n, p, o);
	}else{
		if(n>o) printf("\n\n%d, %d, %d\n\n", o, n, p);
		else printf("\n\n%d, %d, %d\n\n", n, o, p);
	}
		
	return 0;
}
