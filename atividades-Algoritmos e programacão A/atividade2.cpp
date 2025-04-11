#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double lado, area;

    // Solicita o comprimento do lado do tri�ngulo equil�tero
    cout << "Digite o comprimento do lado do tri�ngulo equil�tero: ";
    cin >> lado;

    // Calcula a �rea do tri�ngulo equil�tero usando a f�rmula: �rea = (sqrt(3) / 4) * lado^2
    area = (sqrt(3) / 4) * pow(lado, 2);

    // Exibe a �rea calculada
    cout << "A �rea do tri�ngulo equil�tero �: " << area << endl;

    return 0;
}

