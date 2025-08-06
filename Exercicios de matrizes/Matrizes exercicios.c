//3. Ler uma matriz 3 x 2 e um número informados pelo usuário. O algoritmo deve gerar uma nova matriz que é o resultado da multiplicação do número pela matriz lida.

#include <stdio.h>
int main(){
	
	int matriz[3][2];
	int i, j;
	int multp;
	int resultado[3][2];
	
	printf("Digite os elementos da Matriz 3x2:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("Elemento[%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("Digite um numero para multiplicar a matriz: ");
	scanf("%d", &multp);
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			
		resultado[i][j] = matriz[i][j] * multp;	
			
		}
	}
	
	printf("\nMatriz resultante (multiplicado por %d):\n", multp);
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("%d\t", resultado[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;		
}
