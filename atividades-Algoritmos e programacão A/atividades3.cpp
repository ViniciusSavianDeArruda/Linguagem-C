#include <iostream>
#include <cmath>

int main() {
    // Declara��o da vari�vel para armazenar o raio
    double raio;

    // Solicita ao usu�rio que insira o raio do c�rculo
    std::cout << "Digite o raio do circulo: ";
    std::cin >> raio;

    // Calcula a �rea do c�rculo usando a f�rmula A = p * r^2
    double area = M_PI * pow(raio, 2);

    // Exibe o resultado
    std::cout << "A area do circulo com raio " << raio << " eh: " << area << std::endl;

    return 0;
}

