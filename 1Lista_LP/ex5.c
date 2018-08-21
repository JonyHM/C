#include <stdio.h>

int main() {

	int n, nota, maior=0, i, menor=11;
		
	printf("Insira o numero de alunos: ");
	scanf("%d", &n);
	
	
	for (i = 0; i < n; i++){
		printf("Nota: ");
		scanf("%d", &nota);
		
		if(nota > 10 || nota < 0){
			printf("Erro! Nota Inválida! Insira um numero valido: ");
			scanf("%d", &nota);
		}else if(nota > maior){maior = nota;}
		if(nota < menor){menor = nota;}
	}
	
	printf("\nMaior nota: %d. Menor nota: %d\n", maior, menor);
	
	return 0;
}
