#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Variáveis da carta 1

    char estado1;
    char codigodacarta1[5];
    char cidade1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1, densidadepopulacional1, pibpercapita1;
    

    // Variáveis da carta 2

    char estado2;
    char codigodacarta2[5];
    char cidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2, densidadepopulacional2, pibpercapita2;

    //Dados a serem digitados da carta 1

    printf("Digite as informações da carta 1: \n");

    printf("Digite a letra correspondente ao estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (Ex: A01): ");
    scanf(" %s", codigodacarta1);

    printf("Digite o nome da cidade (Sem espaços): ");
    scanf(" %s", cidade1);

    printf("Digite o numero da população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (Em km2): ");
    scanf("%f", &area1);

    printf("Digite em reais, O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1); 

    //Dados a serem digitados da carta 2

    printf("\nDigite as informações da carta 2: \n");

    printf("Digite a letra correspondente ao estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (Ex: B02): ");
    scanf(" %s", codigodacarta2);

    printf("Digite o nome da cidade (Sem espaços): ");
    scanf(" %s", cidade2);

    printf("Digite o numero da população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (Em km2): ");
    scanf("%f", &area2);

    printf("Digite em reais, O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2); 

    //Dados da carta 1

    printf("\nCarta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código da carta: %s \n", codigodacarta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km2 \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontosturisticos1);

    // Calculos correspondetes a Densidade Populacional e PIB per Capita da carta 1

    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;

    printf("Densidade Populacional: %.2f \n", densidadepopulacional1);
    printf("PIB per Capita: %.2f \n", pibpercapita1);

    //Dados da carta 2

    printf("\nCarta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código da carta: %s \n", codigodacarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km2 \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosturisticos2);
    
    // Calculos correspondetes a Densidade Populacional e PIB per Capita da carta 2
    
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;

    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);

    return 0;
}