#include<iostream>

using namespace std;

int main() {
    // Declara��o de vari�veis
    float numero1, numero2, soma, subtracao, multiplicacao, divisao;

    // Solicita ao usu�rio que insira dois n�meros
    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    // Realiza as opera��es matem�ticas
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;

    // Verifica se o segundo n�mero � diferente de zero antes de realizar a divis�o
    if (numero2 != 0) {
        divisao = numero1 / numero2;
        cout << "A divisao de " << numero1 << " por " << numero2 << " eh: " << divisao << endl;
    } else {
        cout << "Impossivel realizar a divisao por zero." << endl;
    }

    // Exibe os resultados das opera��es
    cout << "A soma de " << numero1 << " e " << numero2 << " eh: " << soma << endl;
    cout << "A subtracao de " << numero1 << " por " << numero2 << " eh: " << subtracao << endl;
    cout << "A multiplicacao de " << numero1 << " por " << numero2 << " eh: " << multiplicacao << endl;

    return 0;
}

