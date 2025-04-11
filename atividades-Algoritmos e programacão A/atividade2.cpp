#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double lado, area;

    // Solicita o comprimento do lado do triângulo equilátero
    cout << "Digite o comprimento do lado do triângulo equilátero: ";
    cin >> lado;

    // Calcula a área do triângulo equilátero usando a fórmula: área = (sqrt(3) / 4) * lado^2
    area = (sqrt(3) / 4) * pow(lado, 2);

    // Exibe a área calculada
    cout << "A área do triângulo equilátero é: " << area << endl;

    return 0;
}

