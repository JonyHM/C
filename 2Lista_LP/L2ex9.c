/*Durante uma corrida de automóveis com N voltas de duração foram anotados para
um piloto, na ordem, os tempos registrados em cada volta. Fazer um programa em
C para ler os tempos das N voltas, calcular e imprimir:
a. melhor tempo;
b. a volta em que o melhor tempo ocorreu;
c. tempo médio das N voltas;
*/

#include<stdio.h>

int main(){
	int V, temp, melhor=0, i, media, vm;
	
	scanf("%d", &V);
	
	for(i=0; i<V; i++){
		printf("Volta %d: ", i+1);
		scanf("%d", &temp);
		if(temp>melhor) {
			melhor = temp;
			vm = i;
		}
		media += temp;
	}
	
	printf("\na) Melhor tempo: %d", melhor);
	printf("\nb) Volta onde ocorreu o melhor tempo: %d", vm+1);
	printf("\nc) Tempo medio das voltas: %d\n", media/V);
	
	return 0;
}