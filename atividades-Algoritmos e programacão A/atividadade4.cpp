#include <iostream>

int main() {
    // Declaração de variáveis
    double numero1, numero2, resultado;

    // Solicita ao usuário que insira os dois números
    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

    // Verifica se o segundo número é diferente de zero antes de realizar a divisão
    if (numero2 != 0) {
        // Realiza a divisão e armazena o resultado
        resultado = numero1 / numero2;

        // Exibe o resultado
        std::cout << "Resultado da divisão: " << resultado << std::endl;
    } else {
        // Caso o segundo número seja zero, exibe uma mensagem de erro
        std::cout << "Erro: Divisão por zero não é permitida." << std::endl;
    }

    return 0;
}

