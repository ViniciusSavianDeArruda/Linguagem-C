//Desenvolva um algoritmo que leia continuamente o valor de um n�mero inteiro chamado nr, e ent�o mostre na tela se nr � positivo ou negativo. O programa dever� terminar quando o usu�rio digitar zero para nr.

#include <stdio.h>

int main() {
    int nr;

    while (1) {
        printf("Digite um n�mero inteiro (digite 0 para sair): ");
        scanf("%d", &nr);

        if (nr == 0) {
            printf("Programa encerrado.\n");
            break;
        } else if (nr > 0) {
            printf("%d � um n�mero positivo.\n", nr);
        } else {
            printf("%d � um n�mero negativo.\n", nr);
        }
    }

    return 0;
}

