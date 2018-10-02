//Dada uma sequência de n números, imprimí-la na ordem inversa da leituira//

#include<stdio.h>

int main(){
	int s, n;
	
	scanf("%d", &s);
	
	int imprime(s){
		int a[s];
		for(n=0; n<s; n++){
			scanf("%d", &a[n]);
		}
		for(n=(s-1); n>=0; n--){
			printf("\n%d ", a[n]);
		}
	}
	
	imprime(s);
	
	return 0;
}
