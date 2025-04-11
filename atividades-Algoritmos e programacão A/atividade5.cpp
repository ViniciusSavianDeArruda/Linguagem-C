#include <iostream>

int main() {
    // Declaração das variáveis para as medidas da caixa
    double comprimento, largura, altura;

    // Solicita ao usuário que insira as medidas da caixa
    std::cout << "Digite o comprimento da caixa: ";
    std::cin >> comprimento;

    std::cout << "Digite a largura da caixa: ";
    std::cin >> largura;

    std::cout << "Digite a altura da caixa: ";
    std::cin >> altura;

    // Calcula o volume da caixa
    double volume = comprimento * largura * altura;

    // Exibe o resultado
    std::cout << "O volume da caixa é: " << volume << std::endl;

    return 0;
}

