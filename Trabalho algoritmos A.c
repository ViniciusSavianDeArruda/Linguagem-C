//Produto de Aprendizagem- VINICIUS ARRUDA
#include <stdio.h>

int main() {
    int idGrenal[447], grenaisGremio[447], grenaisInter[447];
    int total = 0;
    int vitoriasGremio = 0, vitoriasInter = 0, empates = 0;
    int continuar = 1;
    int i, opcao;
    int numeroGrenal, golsGremio, golsInter;
    int soma, indiceBusca, numeroBusca, maiorGols;

    while (continuar == 1) {
        printf("Número do Grenal: ");
        scanf("%d", &numeroGrenal);
        printf("Gols do Gremio: ");
        scanf("%d", &golsGremio);
        printf("Gols do Inter: ");
        scanf("%d", &golsInter);

        idGrenal[total]      = numeroGrenal;
        grenaisGremio[total] = golsGremio;
        grenaisInter[total]  = golsInter;
        total++;

        if (golsGremio > golsInter) {
            vitoriasGremio++;
            printf("Gremio venceu\n");
        } else if (golsInter > golsGremio) {
            vitoriasInter++;
            printf("Inter venceu\n");
        } else {
            empates++;
            printf("Empate\n");
        }

        if (total >= 447) {
            printf("Limite de grenais atingido.\n");
            break;
        }

        printf("Novo Grenal (1. Sim  2. Nao)? ");
        scanf("%d", &continuar);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Listar todos os Grenais\n");
        printf("2. Listar o resultado de um Grenal\n");
        printf("3. Visualizar Estatísticas\n");
        printf("4. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
        	
            for (i = 0; i < total; i++) {
                printf("Grenal %d: Gremio %d x Inter %d - ",
                       idGrenal[i], grenaisGremio[i], grenaisInter[i]);
                if (grenaisGremio[i] > grenaisInter[i])
                    printf("Gremio venceu\n");
                else if (grenaisInter[i] > grenaisGremio[i])
                    printf("Inter venceu\n");
                else
                    printf("Empate\n");
            }

        } else if (opcao == 2) {

            printf("Informe o número do Grenal: ");
            scanf("%d", &numeroBusca);

            indiceBusca = -1;
            for (i = 0; i < total; i++) {
                if (idGrenal[i] == numeroBusca) {
                    indiceBusca = i;
                    break;
                }
            }

            if (indiceBusca == -1) {
                printf("Grenal inexistente.\n");
            } else {
                printf("Grenal %d: Gremio %d x Inter %d - ",
                       idGrenal[indiceBusca],
                       grenaisGremio[indiceBusca],
                       grenaisInter[indiceBusca]);
                if (grenaisGremio[indiceBusca] > grenaisInter[indiceBusca])
                    printf("Gremio venceu\n");
                else if (grenaisInter[indiceBusca] > grenaisGremio[indiceBusca])
                    printf("Inter venceu\n");
                else
                    printf("Empate\n");
            }

        } else if (opcao == 3) {

            printf("Total de Grenais: %d\n", total);
            printf("Vitorias do Gremio: %d\n", vitoriasGremio);
            printf("Vitorias do Inter: %d\n", vitoriasInter);
            printf("Empates: %d\n", empates);

            if (vitoriasGremio > vitoriasInter)
                printf("Gremio venceu mais\n");
            else if (vitoriasInter > vitoriasGremio)
                printf("Inter venceu mais\n");
            else
                printf("Não houve vencedor\n");

            maiorGols = 0;
            for (i = 0; i < total; i++) {
                soma = grenaisGremio[i] + grenaisInter[i];
                if (soma > maiorGols)
                    maiorGols = soma;
            }
            printf("Grenal(is) com mais gols (%d gols):\n", maiorGols);
            for (i = 0; i < total; i++) {
                soma = grenaisGremio[i] + grenaisInter[i];
                if (soma == maiorGols) {
                    printf("- Grenal %d: Gremio %d x Inter %d\n",
                           idGrenal[i], grenaisGremio[i], grenaisInter[i]);
                }
            }

        } else if (opcao != 4) {
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 4);

    printf("Programa encerrado.\n");
    
    return 0;
}


