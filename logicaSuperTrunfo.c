#include <stdio.h>


int main()
{   
//Variáveis Fixas
    char Estado1 = 'A';
    char Estado2 = 'H';
    char COD_CARD1[4] = "01A"; 
    char Nome_City1[30] = "Salvador";
    char COD_CARD2[4] = "08H"; 
    char Nome_City2[30] = "Sao_Paulo";
    int Populacao1 = 3573973;
    int Populacao2 = 11451999;
    float Area1 = 693.8;
    float Area2 = 1521;
    double PIB_1 = 62954000000;
    double PIB_2 = 828980000000;
    int QTD_P_Turismo1 = 408;
    int QTD_P_Turismo2 = 36;
    float DensidadePP1 = Populacao1 / Area1;
    float DensidadePP2 = Populacao2 / Area2;
    float PIB_PC1 = PIB_1 / Populacao1;
    float PIB_PC2 = PIB_2 / Populacao2;
    int escolha;
 

//Apresentação do CAR GAME e das Cidades sorteadas
        printf("Os CARDS Apresentados são: Salvador vs São Paulo\n\n");
        printf("Escolha [1] para Salvador ou [2] para São Paulo: \n");
             scanf("%d", &escolha);
//Informa a Cidade e seus atributos a depender da escolha do usuário
    if (escolha == 1) {
            printf("Sua escolha foi Salvador\n\n");
            printf("Carregando atributos do CARD escolhido...\n");
            printf("\n\nEstado: %c\nCódigo da Cidade: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea Total: %.2f km²\nPIB: R$%.2f\nQuantidade de Pontos Turísticos: %d\n",
                    Estado1, COD_CARD1, Nome_City1, Populacao1, Area1, PIB_1, QTD_P_Turismo1);
    } else { 
            printf("\n\n\nSua escolha foi São Paulo\n\n ");
            printf("Carregando atributos do CARD escolhido...\n");
            printf("\n\nEstado: %c\nCódigo da Cidade: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea Total: %.2f km²\nPIB: R$%.2f\nQuantidade de Pontos Turísticos: %d\n",
                    Estado2, COD_CARD2, Nome_City2, Populacao2, Area2, PIB_2, QTD_P_Turismo2);
    }

//Simula o processo de escolha do atributo de comparação           
        printf("\n\nEscolhendo um ATRIBUTO de comparação aleatória...\n\n");
        printf("Analisando atributo...\n");
        printf("Atributo escolhido: PIB per capita\n");

//Atraves da escolha do atributo predeterminado, realiza a comparação e exibe o vencedor
    if (PIB_PC1 > PIB_PC2){
        printf("Vencedor: Salvador com R$%.3f de PIB per capita\n", PIB_PC1);
        printf("Contra: R$%.3f de PIB per capita da Cidade de São Paulo\n", PIB_PC2);
    } else{
        printf("Vencedor: São Paulo com R$%.3f de PIB per capita\n", PIB_PC2);
        printf("Contra: R$%.3f de PIB per capita da Cidade de Salvador\n", PIB_PC1);
    }
    return 0;
}
//Fim!