//Em um concurso, a identifica��o das cadeiras da sala s�o armazenadas em uma matriz. Considere que existem 6 filas de cadeiras na sala e cada fila possui 7 cadeiras. Desenvolva um algoritmo com uma matriz
//para armazenar a identifica��o das cadeiras que � informada pelo usu�rio. A matriz deve ser exibida. Ap�s, apresentar ao usu�rio a mensagem: �Insira o n�mero da fila:� para que o algoritmo leia o n�mero de uma
//fila e mostra a identifica��o de todas as cadeiras desta fila.

#include <stdio.h>
int main(){
	
	int cadeiras[6][7];
	int i, j;
	
	printf("Insira a identificacao das cadeiras:");
	for(i = 0; i < 6; i++){
		for(j = 0; j < 7; j++){
			printf(" Fila %d, cadeira %d:", i + 1, j + 1);
			scanf("%d", &cadeiras[i][j]);
		}
	}
	
	
}
