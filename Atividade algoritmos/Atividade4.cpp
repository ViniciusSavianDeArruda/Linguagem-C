//Escreva um algoritmo para ler um número n, e em seguida ler pelo teclado a idade de n pessoas e calcular a média das idades.

#include <stdio.h>

int main() {
    int n, i;
    float soma = 0, media;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero de pessoas deve ser maior que zero.\n");
        return 1;
    }

    int idades[n]; 

    for (i = 0; i < n; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        soma += idades[i];
    }

    media = soma / n;


    printf("A media das idades e: %.2f\n", media);

    return 0;
}

