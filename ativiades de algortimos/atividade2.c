//Desenvolva um algoritmo que leia e some continuamente o valor de uma parcela, e pare de ler somente quanto o valor digitado para a parcela for zero. Ao final, mostre a soma total das parcelas.

#include <stdio.h>

int main() {
    float parcela, soma = 0;

    printf("Digite o valor da parcela (digite 0 para encerrar): ");
    scanf("%f", &parcela);

    while (parcela != 0) {
        soma += parcela;
        printf("Digite o valor da pr�xima parcela (digite 0 para encerrar): ");
        scanf("%f", &parcela);
    }

    printf("A soma total das parcelas �: %.2f\n", soma);

    return 0;
}

