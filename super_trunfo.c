#include <stdio.h>

int main(){
    
    char estado1;
    char estado2;
    char cod1[3], cidade1[30];
    char cod2[3], cidade2[30];
    int populacao1,qtp_turismo1;
    int populacao2, qtp_turismo2;
    float area1, pib1; 
    float area2, pib2;
    
    
    //Imprime que será adicionado informações sobre o primeiro card
        
        printf("\n\nAdicione os Dados da Primeira Carta:\n\n");
    
    //Adiciona um caracte do alfabeto entre a letra A até a letra H, representando 8 Estados
        printf("Informe uma letra entre A e H:\n");
            scanf("%c", &estado1);
   
   //Atribui um nímero acrescido de 0 que será exibido juntamente com a letra do Estado. Ex H02
        printf("Informe um número de 1 à 8,acrescido do nímero 0:\n");
        printf("Ex.: 07\n");
            scanf("%s", &cod1);
   
   //Atribui em formato string o nome da Cidade, não podendo ter espaçamento em caso de palavras compostas
        printf("Digite o nome da sua Cidade:\n");
            scanf("%s", &cidade1);
    
    //Adiciona caracteres numéricos sem casas decimais, pontos ou virgulas
        printf("Informa a quantidade de habitantes:\n");
            scanf("%d", &populacao1);
    
    /*Adiciona caracteres numéricos podendo ter ponto '.' que representa a separação de casas decimais
    caracteres esses que ira representa á área da Cidade*/
        printf("Informe a área total da cidade escolhida:\n");
            scanf("%f", &area1);
    
     /*Adiciona caracteres numéricos podendo ter ponto '.' que representa a separação de casas decimais
    caracteres esses que ira representa Produto Interno Bruto da Cidade*/
        printf("Qual o PIB da cidade escolhida?\n");
            scanf("%f", &pib1);
    
    //Adiciona caracteres numéricos sem casas decimais, pontos ou virgulas
        printf("Quantos pontos trurísticos a cidade escolhida possui?\n");
            scanf("%d", &qtp_turismo1);
        
    //Imprime que será adicionado informações sobre o segundo card   
    printf("\n\nAdicione os Dados da Segunda Carta:\n\n");
    
    
    printf("Informe uma letra de A à H:\n");
        scanf(" %c", &estado2);
        
    printf("Informe um número de 1 à 8,acrescido do nímero 0:\n");
        scanf("%s", &cod2);
   
    printf("Digite o nome da sua Cidade:\n");
        scanf("%s", &cidade2);
    
    printf("Informa a quantidade de habitantes:\n");
        scanf("%d", &populacao2);
    
    printf("Informe a área total da cidade escolhida:\n");
        scanf("%f", &area2);
    
    printf("Qual o PIB da cidade escolhida?\n");
        scanf("%f", &pib2);

    printf("Quantos pontos trurísticos a cidade escolhida possui?\n");
        scanf("%d", &qtp_turismo2);
   
   //Imprime como tópicos todas as informações adicionadas de cada card
    printf("CARTA N1\n ESTADO: %c\n CÓDIGO DA CARTA: %c %s\n NOME DA CIDADE: %s\n POPULAÇÃO: %d\n ÁREA: %fKm²\n PIB: R$%f Bilhões de Reais\n Nº DE PONTOS TURÍSTICOS: %d\n ", estado1, estado1, cod1, cidade1, populacao1, area1, pib1, qtp_turismo1);
    printf("\nVS\n\n");
    printf("CARTA N2\n ESTADO: %c\n CÓDIGO DA CARTA: %c %s\n NOME DA CIDADE: %s\n POPULAÇÃO: %d\n ÁREA: %fKm²\n PIB: R$%f Bilhões de Reais\n Nº DE PONTOS TURÍSTICOS: %d\n ", estado2, estado2, cod2, cidade2, populacao2, area2, pib2, qtp_turismo2);
    
return 0;
}