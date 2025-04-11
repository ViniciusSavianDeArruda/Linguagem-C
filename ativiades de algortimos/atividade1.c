//Desenvolva um algoritmo que leia continuamente o valor de um número inteiro chamado nr, e então mostre na tela se nr é positivo ou negativo. O programa deverá terminar quando o usuário digitar zero para nr.

#include <stdio.h>

int main() {
    int nr;

    while (1) {
        printf("Digite um número inteiro (digite 0 para sair): ");
        scanf("%d", &nr);

        if (nr == 0) {
            printf("Programa encerrado.\n");
            break;
        } else if (nr > 0) {
            printf("%d é um número positivo.\n", nr);
        } else {
            printf("%d é um número negativo.\n", nr);
        }
    }

    return 0;
}

