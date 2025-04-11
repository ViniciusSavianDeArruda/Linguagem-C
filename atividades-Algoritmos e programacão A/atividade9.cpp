#include <iostream>

using namespace std;

int main() {
    // Variáveis para armazenar a distância e o tempo
    double distancia, tempo;

    // Solicitar a entrada do usuário para a distância percorrida
    cout << "Digite a distância percorrida (em quilômetros): ";
    cin >> distancia;

    // Solicitar a entrada do usuário para o tempo decorrido
    cout << "Digite o tempo decorrido (em horas): ";
    cin >> tempo;

    // Calcular a velocidade média
    double velocidadeMedia = distancia / tempo;

    // Exibir o resultado
    cout << "A velocidade média do carro é: " << velocidadeMedia << " km/h" << endl;

    return 0;
}

