//Escreva um programa em C que gere os elementos de uma matriz quadrada 5 x 5 e:
//Exiba todos os elementos da matriz
//Exiba os elementos da diagonal principal da matriz
//Calcule e mostre a média dos valores da diagonal principal da matriz
//Calcule e mostre a média dos elementos da matriz
//Encontre e mostre na tela os elementos que estão acima da média, com sua posição(índice de linha e coluna)

#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;
    int somaDiagonal = 0;
    int somaTotal = 0;
    float mediaDiagonal, mediaTotal;

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz completa:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal principal:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t", matriz[i][i]);
        somaDiagonal += matriz[i][i];
    }
    printf("\n");

    mediaDiagonal = somaDiagonal / 5.0f;
    printf("Média da diagonal principal: %.2f\n\n", mediaDiagonal);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            somaTotal += matriz[i][j];
        }
    }

    mediaTotal = somaTotal / 25.0f;
    printf("Média de todos os elementos: %.2f\n\n", mediaTotal);

    printf("Elementos acima da média (%.2f):\n", mediaTotal);
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] > mediaTotal) {
                printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
            }
        }
    }

    return 0;
}


