#include <iostream>

int main() {
    // Declaração de variáveis
    double nota1, nota2, nota3, media;

    // Solicitação das notas ao usuário
    std::cout << "Digite a nota da primeira avaliacao: ";
    std::cin >> nota1;

    std::cout << "Digite a nota da segunda avaliacao: ";
    std::cin >> nota2;

    std::cout << "Digite a nota da terceira avaliacao: ";
    std::cin >> nota3;

    // Calcula a média final
    media = (nota1 + nota2 + nota3) / 3;

    // Apresenta a média final
    std::cout << "A media final do aluno e: " << media << std::endl;

    return 0;
}

