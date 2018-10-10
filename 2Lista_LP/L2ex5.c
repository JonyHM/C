/*Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos. Faça
um programa em C que calcule o produto escalar P de A por B. (Isto é, P =
A[1]*B[1] + A[2]*B[2] + ... A[N]+B[N]).*/

#include<stdio.h>

int main(){
	int N[10], M[10], P[10], x;
	
	for(x=0; x<10; x++){
		scanf("%d", &N[x]);
		scanf("%d", &M[x]);
	}
	for(x=0; x<10; x++){
		P[x] = N[x]*M[x];
		printf("%d ", P[x]);
	}
	
	return 0;
}