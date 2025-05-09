#include <stdio.h>
#include <stdlib.h>

int main() {
    // Carta 1: Salvador
    char Nome_City1[] = "Salvador";
    int Populacao1 = 3573973;
    float Area1 = 693.8;
    double PIB_1 = 62954000000;
    int QTD_P_Turismo1 = 408;
    float DensidadePP1 = Populacao1 / Area1;
    float PIB_PC1 = PIB_1 / Populacao1;

    // Carta 2: São Paulo
    char Nome_City2[] = "Sao Paulo";
    int Populacao2 = 11451999;
    float Area2 = 1521;
    double PIB_2 = 828980000000;
    int QTD_P_Turismo2 = 36;
    float DensidadePP2 = Populacao2 / Area2;
    float PIB_PC2 = PIB_2 / Populacao2;

    int op1, op2, continuar = 1;

    while (continuar) {
        printf("\nBem-vindo ao CAR GAME: Salvador vs São Paulo!\n\n");

        // Menu de atributos
        printf("Escolha dois atributos diferentes para comparar:\n");
        printf("[1] Populacao\n");
        printf("[2] Area Total\n");
        printf("[3] PIB\n");
        printf("[4] Quantidade de Pontos Turisticos\n");
        printf("[5] Densidade Populacional\n");
        printf("[6] PIB per capita\n\n");

        do {
            printf("Escolha o primeiro atributo: ");
            scanf("%d", &op1);
            printf("Escolha o segundo atributo (diferente do primeiro): ");
            scanf("%d", &op2);
            if (op1 == op2 || op1 < 1 || op1 > 6 || op2 < 1 || op2 > 6) {
                printf("\nOpcoes invalidas ou repetidas. Tente novamente.\n\n");
            }
        } while (op1 == op2 || op1 < 1 || op1 > 6 || op2 < 1 || op2 > 6);

        float valores1[6] = {Populacao1, Area1, PIB_1, QTD_P_Turismo1, DensidadePP1, PIB_PC1};
        float valores2[6] = {Populacao2, Area2, PIB_2, QTD_P_Turismo2, DensidadePP2, PIB_PC2};

        const char *nomes_atributos[6] = {
            "Populacao",
            "Area Total",
            "PIB",
            "Quantidade de Pontos Turisticos",
            "Densidade Populacional",
            "PIB per capita"
        };

        printf("\nComparando atributos: %s e %s\n", nomes_atributos[op1 - 1], nomes_atributos[op2 - 1]);

        // Comparacao dos dois atributos
        for (int i = 0; i < 2; i++) {
            int atributo = (i == 0) ? op1 - 1 : op2 - 1;
            float v1 = valores1[atributo];
            float v2 = valores2[atributo];
            printf("\nAtributo: %s\n", nomes_atributos[atributo]);
            printf("%s: %.2f\n", Nome_City1, v1);
            printf("%s: %.2f\n", Nome_City2, v2);

            int vencedor = (atributo == 4) ? (v1 < v2 ? 1 : 2) : (v1 > v2 ? 1 : 2);
            vencedor = (v1 == v2) ? 0 : vencedor;
            printf("Resultado: ");
            if (vencedor == 0)
                printf("Empate\n");
            else
                printf("%s venceu neste atributo.\n", vencedor == 1 ? Nome_City1 : Nome_City2);
        }

        // Soma dos dois atributos
        float soma1 = valores1[op1 - 1] + valores1[op2 - 1];
        float soma2 = valores2[op1 - 1] + valores2[op2 - 1];

        printf("\nSoma dos atributos:\n");
        printf("%s: %.2f\n", Nome_City1, soma1);
        printf("%s: %.2f\n", Nome_City2, soma2);

        if (soma1 > soma2)
            printf("\nVencedor da rodada: %s\n", Nome_City1);
        else if (soma2 > soma1)
            printf("\nVencedor da rodada: %s\n", Nome_City2);
        else
            printf("\nEmpate!\n");

        printf("\nDeseja jogar novamente? [1] Sim / [0] Nao: ");
        scanf("%d", &continuar);
    }

    printf("\nObrigado por jogar!\n");
    return 0;
}