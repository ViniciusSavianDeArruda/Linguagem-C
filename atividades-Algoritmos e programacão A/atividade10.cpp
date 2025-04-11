#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    float salarioMensal, percentualReajuste, novoSalario;

    // Entrada de dados
    cout << "Digite o salário mensal: ";
    cin >> salarioMensal;

    cout << "Digite o percentual de reajuste: ";
    cin >> percentualReajuste;

    // Cálculo do novo salário
    novoSalario = salarioMensal + (salarioMensal * percentualReajuste / 100);

    // Saída de dados
    cout << "Novo salário após o reajuste: R$ " << novoSalario << endl;

    return 0;
}

