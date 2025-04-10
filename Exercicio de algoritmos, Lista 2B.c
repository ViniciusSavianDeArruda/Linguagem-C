//2. Escreva um algoritmo que leia a altura (em metros), o peso (em quilogramas) e o sexo (M ou F) e calcule o peso ideal, dado por: 
//Peso ideal do homem = (72,7 * alturad) – 58
//Peso ideal da mulher = (62,1 * altura) – 44, 7.
//O algoritmo deve informar também se a pessoa está abaixo ou acima de seu peso ideal e em quantos quilos.

#include <stdio.h>

int main() {
    float altura, peso, peso_ideal;
    char sexo;
    
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    
    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);
    
    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido!\n");
        return 1; 
    }
    
    printf("Peso ideal: %.2f kg\n", peso_ideal);
    
    if (peso > peso_ideal) {
        printf("Você está acima do peso ideal por %.2f kg.\n", peso - peso_ideal);
    } else if (peso < peso_ideal) {
        printf("Você está abaixo do peso ideal por %.2f kg.\n", peso_ideal - peso);
    } else {
        printf("Você está no peso ideal!\n");
    }
    
    return 0;
}

