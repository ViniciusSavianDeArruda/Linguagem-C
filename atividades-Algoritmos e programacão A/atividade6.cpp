#include<iostream>

using namespace std;

int main() {
    // Declaração de variáveis
    float numero1, numero2, soma, subtracao, multiplicacao, divisao;

    // Solicita ao usuário que insira dois números
    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    // Realiza as operações matemáticas
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;

    // Verifica se o segundo número é diferente de zero antes de realizar a divisão
    if (numero2 != 0) {
        divisao = numero1 / numero2;
        cout << "A divisao de " << numero1 << " por " << numero2 << " eh: " << divisao << endl;
    } else {
        cout << "Impossivel realizar a divisao por zero." << endl;
    }

    // Exibe os resultados das operações
    cout << "A soma de " << numero1 << " e " << numero2 << " eh: " << soma << endl;
    cout << "A subtracao de " << numero1 << " por " << numero2 << " eh: " << subtracao << endl;
    cout << "A multiplicacao de " << numero1 << " por " << numero2 << " eh: " << multiplicacao << endl;

    return 0;
}

