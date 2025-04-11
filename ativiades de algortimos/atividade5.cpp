//) Fazer um algoritmo que leia uma nota para cada um dos 10 alunos de uma turma e escreva a maior nota.

#include <stdio.h>

int main() {
    float notas[10];
    float maiorNota = 0;

    printf("Digite as notas dos 10 alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f", &notas[i]);

        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
    }

    printf("A maior nota da turma é: %.2f\n", maiorNota);

    return 0;
}

