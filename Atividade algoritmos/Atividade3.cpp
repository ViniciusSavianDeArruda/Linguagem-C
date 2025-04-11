// Imprima uma tabela de convers�o de polegadas para cent�metros, de 1 a 20. Considere que Polegada = Cent�metro * 2,54.

#include <stdio.h>

int main() {
    printf("Tabela de convers�o de polegadas para cent�metros\n");
    printf("----------------------------------------------\n");
    printf("|  Polegadas  |  Cent�metros  |\n");
    printf("----------------------------------------------\n");

    for (int polegadas = 1; polegadas <= 20; polegadas++) {
        double centimetros = polegadas * 2.54;
        printf("|     %2d      |     %6.2f    |\n", polegadas, centimetros);
    }

    printf("----------------------------------------------\n");

    return 0;
}

