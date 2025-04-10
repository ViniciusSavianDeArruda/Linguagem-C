//Exercicio 1:
//Escreva um algoritmo que leia os valores para um vetor de 10 elementos e então mostre na tela a quantidade de números pares e ímpares.

/*
#include <stdio.h>

int main() {
    int vetor[10];
    int i, pares = 0, impares = 0;

    printf("Digite 10 valores:\n");
    for(i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}*/


//Exercicio 2:
//Fazer um algoritmo que leia um vetor de dez números e escreva-os na ordem contrária à ordem de leitura.

/*
#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Os numeros na ordem contraria sao:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}*/


//Exercicio 3:
//Fazer um algoritmo que leia dez números inteiros armazenando-os em um vetor e escreva primeiramente todos os números pares lidos e após todos os ímpares.

/*#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    printf("Digite 10 números inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Números pares:\n");
    for(i = 0; i < 10; i++) {
        if(numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }
    
    printf("\nNúmeros ímpares:\n");
    for(i = 0; i < 10; i++) {
        if(numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
        }
    }
    
    return 0;
}*/


//Exercicio 4:
//Escreva um algoritmo que leia valores para dois vetores de 20 elementos e então realize a soma dos elementos da mesma posição, armazenando o resultado em um outro vetor.

/*#include <stdio.h>

int main() {
    int vetor1[20], vetor2[20], soma[20];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 20; i++) {
        soma[i] = vetor1[i] + vetor2[i];
    }

    printf("Vetor resultante da soma dos elementos correspondentes:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: %d\n", i + 1, soma[i]);
    }

    return 0;
}*/

//Exercicio 5:
// Fazer um algoritmo que leia trinta números float armazenando-os em um vetor e após escreva a posição de cada número menor que zero desse vetor.

/*#include <stdio.h>

int main() {
    float numeros[30];
    int i;

    printf("Digite 30 números float:\n");
    for (i = 0; i < 30; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    printf("Posições dos números menores que zero:\n");
    for (i = 0; i < 30; i++) {
        if (numeros[i] < 0) {
            printf("Posição %d\n", i);
        }
    }

    return 0;
}*/


//Exercicio 6:
//Fazer um algoritmo que leia cem números float e armazene em um vetor. Depois apresente o percentual de números que são maiores que a média dos mesmos.

/*#include <stdio.h>

#define Tamanho 100

int main() {
    float numeros[Tamanho];
    float soma = 0.0, media;
    int i, count = 0;

    printf("Digite %d números float:\n", Tamanho);
    for (i = 0; i < Tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / Tamanho;

    for (i = 0; i < Tamanho; i++) {
        if (numeros[i] > media) {
            count++;
        }
    }

    float percentual = ((float)count / Tamanho) * 100;

    printf("A média dos números é: %.2f\n", media);
    printf("Percentual de números maiores que a média: %.2f%%\n", percentual);

    return 0;
}*/







