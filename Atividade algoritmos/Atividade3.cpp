// Imprima uma tabela de conversão de polegadas para centímetros, de 1 a 20. Considere que Polegada = Centímetro * 2,54.

#include <stdio.h>

int main() {
    printf("Tabela de conversão de polegadas para centímetros\n");
    printf("----------------------------------------------\n");
    printf("|  Polegadas  |  Centímetros  |\n");
    printf("----------------------------------------------\n");

    for (int polegadas = 1; polegadas <= 20; polegadas++) {
        double centimetros = polegadas * 2.54;
        printf("|     %2d      |     %6.2f    |\n", polegadas, centimetros);
    }

    printf("----------------------------------------------\n");

    return 0;
}

