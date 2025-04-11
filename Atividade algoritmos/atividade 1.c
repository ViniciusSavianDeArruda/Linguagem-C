//Atividade 1:Faça um programa que leia um número e apresente a tabuada deste número.

#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}











