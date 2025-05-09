#include <stdio.h>
#include <stdlib.h> // Necessário para a função exit()

int main() {
    // Variáveis Fixas para a Carta 1 (Salvador)
    char Estado1 = 'A';
    char COD_CARD1[4] = "01A";
    char Nome_City1[30] = "Salvador";
    int Populacao1 = 3573973;
    float Area1 = 693.8;
    double PIB_1 = 62954000000LL;
    int QTD_P_Turismo1 = 408;
    float DensidadePP1 = (float)Populacao1 / Area1;
    float PIB_PC1 = PIB_1 / Populacao1;

    // Variáveis Fixas para a Carta 2 (São Paulo)
    char Estado2 = 'H';
    char COD_CARD2[4] = "08H";
    char Nome_City2[30] = "Sao_Paulo";
    int Populacao2 = 11451999;
    float Area2 = 1521;
    double PIB_2 = 828980000000;
    int QTD_P_Turismo2 = 36;
    float DensidadePP2 = (float)Populacao2 / Area2;
    float PIB_PC2 = PIB_2 / Populacao2;

    int escolha_cidade, escolha_atributo;

    // Apresentação do CAR GAME e das Cidades sorteadas
    printf("Bem-vindo ao CAR GAME!\n\n");
    printf("Os CARDS Apresentados são: Salvador vs São Paulo\n\n");

    // Escolha da cidade
    printf("Escolha [1] para Salvador ou [2] para São Paulo: \n");
    scanf("%d", &escolha_cidade);

    // Exibe os atributos da cidade escolhida
    printf("\n");
    if (escolha_cidade == 1) {
        printf("Sua escolha foi Salvador\n\n");
        printf("Carregando atributos do CARD escolhido...\n");
        printf("\nEstado: %c\nCódigo da Cidade: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea Total: %.2f km²\nPIB: R$%.2f\nQuantidade de Pontos Turísticos: %d\n",
               Estado1, COD_CARD1, Nome_City1, Populacao1, Area1, PIB_1, QTD_P_Turismo1);
    } else if (escolha_cidade == 2) {
        printf("Sua escolha foi São Paulo\n\n");
        printf("Carregando atributos do CARD escolhido...\n");
        printf("\nEstado: %c\nCódigo da Cidade: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea Total: %.2f km²\nPIB: R$%.2f\nQuantidade de Pontos Turísticos: %d\n",
               Estado2, COD_CARD2, Nome_City2, Populacao2, Area2, PIB_2, QTD_P_Turismo2);
    } else {
        printf("Escolha inválida. Saindo do programa.\n");
        exit(1); // Encerra o programa com código de erro
    }

    // Menu de escolha do atributo
    printf("\n\nEscolha um ATRIBUTO para comparar as cidades:\n");
    printf("[1] População\n");
    printf("[2] Área Total\n");
    printf("[3] PIB\n");
    printf("[4] Quantidade de Pontos Turísticos\n");
    printf("[5] Densidade Populacional\n");
    printf("[6] PIB per capita\n");
    printf("Digite o número do atributo desejado: ");
    scanf("%d", &escolha_atributo);

    // Realiza a comparação com base no atributo escolhido
    printf("\nComparando atributo...\n");
    switch (escolha_atributo) {
        case 1: // População
            printf("Atributo escolhido: População\n");
            if (Populacao1 > Populacao2) {
                printf("Vencedor: Salvador com %d habitantes\n", Populacao1);
                printf("Contra: %d habitantes de São Paulo\n", Populacao2);
            } else {
                printf("Vencedor: São Paulo com %d habitantes\n", Populacao2);
                printf("Contra: %d habitantes de Salvador\n", Populacao1);
            }
            break;
        case 2: // Área Total
            printf("Atributo escolhido: Área Total\n");
            if (Area1 > Area2) {
                printf("Vencedor: Salvador com %.2f km²\n", Area1);
                printf("Contra: %.2f km² de São Paulo\n", Area2);
            } else {
                printf("Vencedor: São Paulo com %.2f km²\n", Area2);
                printf("Contra: %.2f km² de Salvador\n", Area1);
            }
            break;
        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            if (PIB_1 > PIB_2) {
                printf("Vencedor: Salvador com R$%.2f\n", PIB_1);
                printf("Contra: R$%.2f de São Paulo\n", PIB_2);
            } else {
                printf("Vencedor: São Paulo com R$%.2f\n", PIB_2);
                printf("Contra: R$%.2f de Salvador\n", PIB_1);
            }
            break;
        case 4: // Quantidade de Pontos Turísticos
            printf("Atributo escolhido: Quantidade de Pontos Turísticos\n");
            if (QTD_P_Turismo1 > QTD_P_Turismo2) {
                printf("Vencedor: Salvador com %d pontos turísticos\n", QTD_P_Turismo1);
                printf("Contra: %d pontos turísticos de São Paulo\n", QTD_P_Turismo2);
            } else {
                printf("Vencedor: São Paulo com %d pontos turísticos\n", QTD_P_Turismo2);
                printf("Contra: %d pontos turísticos de Salvador\n", QTD_P_Turismo1);
            }
            break;
        case 5: // Densidade Populacional
            printf("Atributo escolhido: Densidade Populacional\n");
            if (DensidadePP1 > DensidadePP2) {
                printf("Vencedor: Salvador com %.2f hab/km²\n", DensidadePP1);
                printf("Contra: %.2f hab/km² de São Paulo\n", DensidadePP2);
            } else {
                printf("Vencedor: São Paulo com %.2f hab/km²\n", DensidadePP2);
                printf("Contra: %.2f hab/km² de Salvador\n", DensidadePP1);
            }
            break;
        case 6: // PIB per capita
            printf("Atributo escolhido: PIB per capita\n");
            if (PIB_PC1 > PIB_PC2) {
                printf("Vencedor: Salvador com R$%.2f de PIB per capita\n", PIB_PC1);
                printf("Contra: R$%.2f de PIB per capita de São Paulo\n", PIB_PC2);
            } else {
                printf("Vencedor: São Paulo com R$%.2f de PIB per capita\n", PIB_PC2);
                printf("Contra: R$%.2f de PIB per capita de Salvador\n", PIB_PC1);
            }
            break;
        default:
            printf("Opção inválida. Por favor, escolha um atributo de 1 a 6.\n");
            return 1; // Retorna um código de erro
    }

    return 0;
}
