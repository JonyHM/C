/*Leia um vetor de 10 posições e em seguida um valor X qualquer. Seu programa devera fazer uma busca do valor de X no vetor lido e informar 
a posição em que foi encontrado ou se não foi encontrado.*/

#include <stdio.h>

int main(){
	int v[10], x, i;
	
		int posicao(int v[10], int x){
		for(i=0; i<10; i++) scanf("%d", &v[i]);
		
		scanf("%d", &x);
		
		for(i=0; i<10; i++){
			if(v[i]==x){
				return printf("\nO valor %d esta na posicao de numero %d\n", x, i);
			}
		}
		return printf("\nO valor %d nao esta neste vetor\n", x);
	}	
	
	posicao(v,x);
	
	return 0;
}