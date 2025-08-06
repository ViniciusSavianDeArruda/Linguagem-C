//PRODUTO DE APRENDIZAGEM- VINICIUS ARRUDA
#include <stdio.h>


int main() {
    int linhas, colunas;
    int matriz1[100][100], matriz2[100][100], matrizUniao[100][100], matrizDiferenca[100][100];
    int i, j, linhaMaior, colunaMaior, maiorLinha = 0, maiorColuna = 0;
	int opcao;
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    printf("Escolha uma opcao:\n");
    printf("1. Inserir Matriz\n");
    printf("2. Gerar Matriz\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Insira os valores da primeira matriz (0 ou 1):\n");
        for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                do {
                    printf("Digite o valor para [linha %d][coluna %d]: ", i+1, j+1);
                    scanf("%d", &matriz1[i][j]);
                } while (matriz1[i][j] != 0 && matriz1[i][j] != 1);
            }
        }
    } else if (opcao == 2) {
        printf("Gerando a primeira matriz com valores fixos (alternando 0 e 1):\n");
        for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                matriz1[i][j] = (i + j) % 2;
            }
        }
    }

    printf("\nMatriz 1 (numerica):\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nRepresentação gráfica da Matriz 1:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz1[i][j] == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\nPressione ENTER para continuar...");
    getchar(); 
    getchar(); 

    printf("\nInsira a segunda matriz (mesmo tamanho da primeira):\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            do {
                printf("Digite o valor para [linha %d][coluna %d]: ", i+1, j+1);
                scanf("%d", &matriz2[i][j]);
            } while (matriz2[i][j] != 0 && matriz2[i][j] != 1);
        }
    }

    int iguais = 1;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz1[i][j] != matriz2[i][j]) {
                iguais = 0;
                break;
            }
        }
    }
    if (iguais) {
        printf("As imagens são iguais.\n");
    } else {
        printf("As imagens são diferentes.\n");
    }

    printf("\nUniao das Imagens:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matrizUniao[i][j] = matriz1[i][j] | matriz2[i][j];
            printf("%d ", matrizUniao[i][j]);
        }
        printf("\n");
    }

    printf("\nDiferenca das Imagens:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matrizDiferenca[i][j] = matriz1[i][j] & !matriz2[i][j];
            printf("%d ", matrizDiferenca[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < linhas; i++) {
        int soma = 0;
        for (j = 0; j < colunas; j++) {
            soma += matriz1[i][j];
        }
        if (soma > maiorLinha) {
            maiorLinha = soma;
            linhaMaior = i + 1;
        }
    }

    for (j = 0; j < colunas; j++) {
        int soma = 0;
        for (i = 0; i < linhas; i++) {
            soma += matriz1[i][j];
        }
        if (soma > maiorColuna) {
            maiorColuna = soma;
            colunaMaior = j + 1;
        }
    }

    printf("\nA linha com mais pixels ligados é a %d.\n", linhaMaior);
    printf("A coluna com mais pixels ligados é a %d.\n", colunaMaior);

    return 0;
}

