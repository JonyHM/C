/*Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C que imprima todos os elementos comuns aos dois vetores.*/

#include<stdio.h>

int main(){
	int vetA[5], vetB[8], vetC[5], i, j, x=0;
	
	for(i=0; i<5; i++){
		vetA[i] = 9;
		vetC[i] = 0;
	}
	for(i=0; i<8; i++){
		vetB[i] = 0;
	}
	
	for(i=0; i<5; i++){
		scanf("%d", &vetA[i]);
	}
	printf("\n");
	for(i=0; i<8; i++){
		scanf("\n%d", &vetB[i]);
	}
	
	for(i=0; i<5; i++){
		for(j=0; j<8; j++){
			if(vetA[i] == vetB[j]){
				vetC[x] = vetA[i];
				x++;
				break;
			}
		}
	}
	printf("\n");
	for(i=0; i<5; i++){
		if(vetC[i]!=0){
			printf(" %d", vetC[i]);
		}
	}
	
	return 0;
}