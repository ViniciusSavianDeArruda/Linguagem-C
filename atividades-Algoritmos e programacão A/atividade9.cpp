#include <iostream>

using namespace std;

int main() {
    // Vari�veis para armazenar a dist�ncia e o tempo
    double distancia, tempo;

    // Solicitar a entrada do usu�rio para a dist�ncia percorrida
    cout << "Digite a dist�ncia percorrida (em quil�metros): ";
    cin >> distancia;

    // Solicitar a entrada do usu�rio para o tempo decorrido
    cout << "Digite o tempo decorrido (em horas): ";
    cin >> tempo;

    // Calcular a velocidade m�dia
    double velocidadeMedia = distancia / tempo;

    // Exibir o resultado
    cout << "A velocidade m�dia do carro �: " << velocidadeMedia << " km/h" << endl;

    return 0;
}

