#include <iostream>

int main() {
    // Declara��o de vari�veis
    double nota1, nota2, nota3, media;

    // Solicita��o das notas ao usu�rio
    std::cout << "Digite a nota da primeira avaliacao: ";
    std::cin >> nota1;

    std::cout << "Digite a nota da segunda avaliacao: ";
    std::cin >> nota2;

    std::cout << "Digite a nota da terceira avaliacao: ";
    std::cin >> nota3;

    // Calcula a m�dia final
    media = (nota1 + nota2 + nota3) / 3;

    // Apresenta a m�dia final
    std::cout << "A media final do aluno e: " << media << std::endl;

    return 0;
}

