#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[101]; 
    int i, troca;

    printf("Digite a mensagem (apenas letras maiúsculas): ");
    scanf("%100s", mensagem); 

    printf("Digite o número de troca (deslocamento): ");
    scanf("%d", &troca);

    for (i = 0; mensagem[i] != '\0'; i++) {

        if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
            mensagem[i] = ((mensagem[i] - 'A' + troca) % 26) + 'A';
        }
    }

    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}
