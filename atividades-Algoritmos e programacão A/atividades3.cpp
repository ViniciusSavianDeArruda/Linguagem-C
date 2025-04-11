#include <iostream>
#include <cmath>

int main() {
    // Declaração da variável para armazenar o raio
    double raio;

    // Solicita ao usuário que insira o raio do círculo
    std::cout << "Digite o raio do circulo: ";
    std::cin >> raio;

    // Calcula a área do círculo usando a fórmula A = p * r^2
    double area = M_PI * pow(raio, 2);

    // Exibe o resultado
    std::cout << "A area do circulo com raio " << raio << " eh: " << area << std::endl;

    return 0;
}

