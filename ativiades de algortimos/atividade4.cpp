// Escreva um programa em C leia 20 n�meros e que conte a quantidade de n�meros pares e �mpares digitados por um usu�rio. Apresente o resultado.

#include <stdio.h>

int main() {
    int numeros[20];
    int pares = 0, impares = 0;

    printf("Digite 20 numeros:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 20; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}





