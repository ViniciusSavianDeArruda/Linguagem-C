#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double celsius, fahrenheit;

    // Solicita a temperatura em Celsius
    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> celsius;

    // Converte para Fahrenheit usando a fun��o
    fahrenheit = celsiusToFahrenheit(celsius);

    // Exibe o resultado
    std::cout << "A temperatura em Fahrenheit �: " << fahrenheit << std::endl;

    return 0;
}

