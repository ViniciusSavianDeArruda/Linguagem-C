//Dado um limite inferior e superior, calcule a soma de todos os números pares contidos nesse intervalo.

#include <stdio.h>

int main() {
    int lower_limit, upper_limit, sum = 0;

    printf("Digite o limite inferior: ");
    scanf("%d", &lower_limit);
    printf("Digite o limite superior: ");
    scanf("%d", &upper_limit);

    if (lower_limit > upper_limit) {
        int temp = lower_limit;
        lower_limit = upper_limit;
        upper_limit = temp;
    }

    if (lower_limit % 2 != 0) {
        lower_limit++;
    }

    for (int i = lower_limit; i <= upper_limit; i += 2) {
        sum += i;
    }

    printf("A soma de todos os números pares no intervalo é: %d\n", sum);

    return 0;
}

