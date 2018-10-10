/*Fazer um programa em C para ler uma quantidade N de alunos. Ler a nota de cada
um dos N alunos e calcular a média aritmética das notas. Contar quantos alunos
estão com a nota acima de 5.0. Obs.: Se nenhum aluno tirou nota acima de 5.0,
imprimir mensagem: Não há nenhum aluno com nota acima de 5 */

#include<stdio.h>

int main(){
	int N, i, media, md=0;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		int alunos[N];
		scanf("%d", &alunos[i]);
		media += alunos[i];
		if(alunos[i] > 5){
			md++;
		}
	}
	media /= N;
	
	printf("\nMedia das notas: %d\n", media);
	if(md==0) printf("\nNao ha nenhum aluno com nota acima de 5!");
	else if(md==1) printf("\n%d aluno tirou nota acima de 5", md);
	else printf("\n%d alunos tiraram nota acima de 5", md);
	
	return 0;
}