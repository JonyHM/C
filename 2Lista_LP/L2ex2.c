/*Leia um vetor de 8 posições e troque os 4 primeiros valores pelos 4 últimos e vice e versa. Escreva ao final o vetor obtido.*/

#include <stdio.h>

int main(){
	int vet[8], i, novo[8], a=4;
	
	for (i=0; i<8; i++)	scanf("%d", &vet[i]);

	for (i=0; i<4; i++){
		novo[i] = vet[a];
		a++;
	}
	a = 0;
	for (i=4; i<8; i++){
		novo[i] = vet[a];
		a++;
	}
	printf("\n");
	for (i=0; i<8; i++)	printf("%d ", novo[i]);
	
	return 0;
}