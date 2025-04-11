// Escreva um algoritmo para calcular o fatorial de um n�mero.

#include <stdio.h>

int calcularFatorial(int numero) {
    int resultado = 1;
    
    for (int i = 1; i <= numero; ++i) {
        resultado *= i;
    }
    
    return resultado;
}

int main() {
    int numero;
    
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Erro: Fatorial de n�meros negativos n�o � definido.\n");
    } else {
        int fatorial = calcularFatorial(numero);
        printf("O fatorial de %d �: %d\n", numero, fatorial);
    }
    
    return 0;
}

