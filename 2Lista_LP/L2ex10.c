/* Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de
testes. A prova consta de 30 questões, cada uma com cinco alternativas
identificadas por A, B, C, D e E. Para isso são dados:
a. o cartão gabarito;
b. o número de alunos da turma;
c. o cartão de respostas para cada aluno, contendo o seu número e suas
respostas.*/

#include<stdio.h>

int main(){
	int a, i;
	char gab[10], resp[10];
	
	scanf("%d", &a);
	
	printf("\n");
	printf("Gabarito: ");
	
	for(i=0; i<10; i++){
		printf("Questão %d: ", i+1);
		scanf("%c", &gab[i]);
	}
	
	printf("\n");
	for{
		for(i=0; i<10; i++){
			printf("Questão %d: ", i+1);
			scanf("%c", &resp[i]);
		}
	}
}