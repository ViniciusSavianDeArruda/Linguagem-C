#include <iostream>

int main() {
    // Declara��o de vari�veis
    double numero1, numero2, resultado;

    // Solicita ao usu�rio que insira os dois n�meros
    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo n�mero: ";
    std::cin >> numero2;

    // Verifica se o segundo n�mero � diferente de zero antes de realizar a divis�o
    if (numero2 != 0) {
        // Realiza a divis�o e armazena o resultado
        resultado = numero1 / numero2;

        // Exibe o resultado
        std::cout << "Resultado da divis�o: " << resultado << std::endl;
    } else {
        // Caso o segundo n�mero seja zero, exibe uma mensagem de erro
        std::cout << "Erro: Divis�o por zero n�o � permitida." << std::endl;
    }

    return 0;
}

