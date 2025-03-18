#include <stdio.h>

int main(){

    //Aluno: Kleverton de Sousa Silva
    // Desafio Super Trunfo - Mestre


    //Carta 1

    char estado1;
    char codigo_carta1[6];
    char nome_cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //variavel para fazer o culculo carta 1

    float densidade_populacional_carta1;
    float pib_per_capita_carta1;
    float super_poder_carta1;


    //carta 2

    char estado2;
    char codigo_carta2[6];
    char nome_cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //variavel para fazer o calculo carta 2

    float densidade_populacional_carta2;
    float pib_per_capital_carta2;
    float super_poder_carta2;

    

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


     //calculo densidade carta 1

     densidade_populacional_carta1 = (populacao1 / area1);

     //calculo pib per capita carta 1
 
     pib_per_capita_carta1 = (pib1 / populacao1);
     
     //  calculo de super poder carta 1

     super_poder_carta1 = ((float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita_carta1) - densidade_populacional_carta1;
 
         //comparador 

         int resultado;


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


    //calculo densidade carta 2

    densidade_populacional_carta2 = (populacao2 / area2);

    //calculo pib per capita carta1

    pib_per_capital_carta2 = (pib2 / populacao2);

    //calculo de super poder carta 2

    super_poder_carta2 = ((float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capital_carta2) - densidade_populacional_carta2;


    //Saida do Usuario

    //Carta 1

    printf("\n Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional da Carta1: %.2f, \n", densidade_populacional_carta1);
    printf("PIB per Capita da Carta1: %.2f, \n", pib_per_capita_carta1);


    //Carta 2 

    printf("\n Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional da Carta2: %.2f, \n", densidade_populacional_carta2);
    printf("PIB per Capita da Carta2: %.2f, \n", pib_per_capital_carta2);


    //comparacao de cartas 

    printf("\n *** COMPARACOES DAS CARTAS *** \n");


    resultado = populacao1 > populacao2;                          //resultado populacao
    printf("Populacao: %d\n", resultado);

    resultado = area1 > area2;                                   //resultado area 
    printf("Area: %d\n", resultado);

    resultado = pib1 > pib2;                                    //resultado PIB
    printf("PIB: %d\n", resultado);

    resultado = pontos_turisticos1 > pontos_turisticos2;       //reaultado pontos turisticos
    printf("Pontos Turisticos: %d\n", resultado);

    resultado = densidade_populacional_carta1 < densidade_populacional_carta2;  //resultado densidade
    printf("Densidade Populacional: %d\n", resultado);

    resultado = pib_per_capita_carta1 > pib_per_capital_carta2;   //resultado pib per capita
    printf("PIB Per Capita: %d\n", resultado);

    resultado = super_poder_carta1 > super_poder_carta2;         //resultado super poder 
    printf("Super Poder: %d\n", resultado);




    




    return 0;
}
