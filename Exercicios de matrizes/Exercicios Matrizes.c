//Em um concurso, a identificação das cadeiras da sala são armazenadas em uma matriz. Considere que existem 6 filas de cadeiras na sala e cada fila possui 7 cadeiras. Desenvolva um algoritmo com uma matriz
//para armazenar a identificação das cadeiras que é informada pelo usuário. A matriz deve ser exibida. Após, apresentar ao usuário a mensagem: “Insira o número da fila:” para que o algoritmo leia o número de uma
//fila e mostra a identificação de todas as cadeiras desta fila.

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
