//Atividade 1:Fa�a um programa que leia um n�mero e apresente a tabuada deste n�mero.

#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um n�mero para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}











