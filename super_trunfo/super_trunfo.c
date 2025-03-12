#include <stdio.h>

int main(){

    //Aluno: Kleverton de Sousa Silva
    // Desafio Super Trunfo


    //Carta 1

    char estado1;
    char codigo_carta1[6];
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //carta 2

    char estado2;
    char codigo_carta2[6];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;


    //entrada da carta1

    printf("\nCarta1!\n");

    printf("\nDigite o Estado da Carta 1 (A - H):");
    scanf("%c", &estado1);
    
    printf("\nDigite o Codigo da carta 1:");
    scanf("%s", codigo_carta1);

    printf("\nNome da cidade 1:");
    scanf("%s", nome_cidade1);


    printf("\nPopulacao da Carta 1:");
    scanf("%d", &populacao1);

    printf("\nArea da Carta 1:");
    scanf("%f", &area1);

    printf("\nPIB da Carta 1:");
    scanf("%f", &pib1);

    printf("\nNumero de Pontos Turisticos Carta 1:");
    scanf("%d", &pontos_turisticos1);

    //Entrada da Carta 2

    printf("\nCarta2!\n");

    printf("\nDigite o Estado da Carta 2 (A - H):");
    scanf(" %c", &estado2);

    printf("\nDigite o Codigo da Carta 2:");
    scanf("%s", codigo_carta2);

    printf("\nNome da Cidade 2:");
    scanf("%s", nome_cidade2);

    printf("\nPopulacao da Carta 2:");
    scanf("%d", &populacao2);

    printf("\nArea da Carta 2:");
    scanf("%f",&area2);

    printf("\nPIB da Carta 2:");
    scanf("%f", &pib2);

    printf("\nNumero de Pontos Turisticos 2:");
    scanf("%d", &pontos_turisticos2);

    //Saida do Usuario

    //Carta 1

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    //Carta 2 

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;

}