#include <iostream>
using namespace std;

int main() {
    // Declara��o de vari�veis
    float salarioMensal, percentualReajuste, novoSalario;

    // Entrada de dados
    cout << "Digite o sal�rio mensal: ";
    cin >> salarioMensal;

    cout << "Digite o percentual de reajuste: ";
    cin >> percentualReajuste;

    // C�lculo do novo sal�rio
    novoSalario = salarioMensal + (salarioMensal * percentualReajuste / 100);

    // Sa�da de dados
    cout << "Novo sal�rio ap�s o reajuste: R$ " << novoSalario << endl;

    return 0;
}

