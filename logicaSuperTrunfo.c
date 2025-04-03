#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

//Inserindo os dados das cartas sem que o usuário precise digitar
//Feito no VS Code por Gabriel Dalla Vecchia, com o auxílio de videos da Estacio, Youtube e a ferramenta COPILOT dentro da VS CODE
int main() {
    //Carta 1: São Paulo
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nome1[20] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pturisticos1 = 50;

    //Carta 2: Rio de Janeiro
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nome2[20] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pturisticos2 = 30;

    //Cálculos dos atribudos
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    
    //Exibição da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pturisticos1);
    printf("Densidade: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.8f\n", pibPerCapita1);

    printf("--------------------------------------------------\n");

    //Exibição da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pturisticos2);
    printf("Densidade: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.8f\n", pibPerCapita2);

    printf("--------------------------------------------------\n");

    //Comparação de cartas utilizando o atributo População
    printf("Comparação de cartas:\n");
    printf("Carta 1 - %s (%c): %d\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", nome2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("A carta 1 vence no quesito população.\n");
    } else if (populacao1 < populacao2) {
        printf("A carta 2 vence no quesito população.\n");
    } else {
        printf("Empate! As cartas têm a mesma população.\n");
    }
    printf("--------------------------------------------------\n");

    return 0;
}
