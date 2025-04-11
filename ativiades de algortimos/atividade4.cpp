// Escreva um programa em C leia 20 números e que conte a quantidade de números pares e ímpares digitados por um usuário. Apresente o resultado.

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





