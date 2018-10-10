/*Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor*/

#include<stdio.h>

int main(){
	int mat[10][10], maior=0, i, j, L, C;
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(j==0) printf("\n");
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(mat[i][j] > maior){
				maior = mat[i][j];
				L=i;
				C=j;
			}	
		}
	}
	
	printf("O maior valor (%d) está na Linha %d e Coluna %d", maior, L, C);
}
