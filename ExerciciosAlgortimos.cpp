//Exercicio 1:
//Escreva um algoritmo que leia os valores para um vetor de 10 elementos e ent�o mostre na tela a quantidade de n�meros pares e �mpares.

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

    printf("Quantidade de n�meros pares: %d\n", pares);
    printf("Quantidade de n�meros �mpares: %d\n", impares);

    return 0;
}*/


//Exercicio 2:
//Fazer um algoritmo que leia um vetor de dez n�meros e escreva-os na ordem contr�ria � ordem de leitura.

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
//Fazer um algoritmo que leia dez n�meros inteiros armazenando-os em um vetor e escreva primeiramente todos os n�meros pares lidos e ap�s todos os �mpares.

/*#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    printf("Digite 10 n�meros inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("N�meros pares:\n");
    for(i = 0; i < 10; i++) {
        if(numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }
    
    printf("\nN�meros �mpares:\n");
    for(i = 0; i < 10; i++) {
        if(numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
        }
    }
    
    return 0;
}*/


//Exercicio 4:
//Escreva um algoritmo que leia valores para dois vetores de 20 elementos e ent�o realize a soma dos elementos da mesma posi��o, armazenando o resultado em um outro vetor.

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
// Fazer um algoritmo que leia trinta n�meros float armazenando-os em um vetor e ap�s escreva a posi��o de cada n�mero menor que zero desse vetor.

/*#include <stdio.h>

int main() {
    float numeros[30];
    int i;

    printf("Digite 30 n�meros float:\n");
    for (i = 0; i < 30; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    printf("Posi��es dos n�meros menores que zero:\n");
    for (i = 0; i < 30; i++) {
        if (numeros[i] < 0) {
            printf("Posi��o %d\n", i);
        }
    }

    return 0;
}*/


//Exercicio 6:
//Fazer um algoritmo que leia cem n�meros float e armazene em um vetor. Depois apresente o percentual de n�meros que s�o maiores que a m�dia dos mesmos.

/*#include <stdio.h>

#define Tamanho 100

int main() {
    float numeros[Tamanho];
    float soma = 0.0, media;
    int i, count = 0;

    printf("Digite %d n�meros float:\n", Tamanho);
    for (i = 0; i < Tamanho; i++) {
        printf("N�mero %d: ", i + 1);
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

    printf("A m�dia dos n�meros �: %.2f\n", media);
    printf("Percentual de n�meros maiores que a m�dia: %.2f%%\n", percentual);

    return 0;
}*/







