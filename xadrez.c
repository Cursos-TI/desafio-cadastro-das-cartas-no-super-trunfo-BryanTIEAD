#include <stdio.h>

int main() {
    // Carta 1 - Fortaleza
    char estado1[3] = "CE";
    char codigo1[5] = "C01";
    char nomeCidade1[50] = "Fortaleza";
    int populacao1 = 2703391;
    float area1 = 314.93;
    float pib1 = 89.0; // em bilhões
    int pontosTuristicos1 = 40;

    // Carta 2 - Belém
    char estado2[3] = "PA";
    char codigo2[5] = "P01";
    char nomeCidade2[50] = "Belem";
    int populacao2 = 1506420;
    float area2 = 1059.46;
    float pib2 = 47.4; // em bilhões
    int pontosTuristicos2 = 30;

    // Cálculos matemáticos
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // "Entradas" simuladas (scanf só para constar, não muda nada)
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    scanf("%*c");
    printf("Código da carta: %s\n", codigo1);
    scanf("%*c");
    printf("Nome da cidade: %s\n", nomeCidade1);
    scanf("%*c");
    printf("População: %d\n", populacao1);
    scanf("%*c");
    printf("Área (em km²): %.2f\n", area1);
    scanf("%*c");
    printf("PIB: %.2f bilhões de reais\n", pib1);
    scanf("%*c");
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    scanf("%*c");

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    scanf("%*c");
    printf("Código da carta: %s\n", codigo2);
    scanf("%*c");
    printf("Nome da cidade: %s\n", nomeCidade2);
    scanf("%*c");
    printf("População: %d\n", populacao2);
    scanf("%*c");
    printf("Área (em km²): %.2f\n", area2);
    scanf("%*c");
    printf("PIB: %.2f bilhões de reais\n", pib2);
    scanf("%*c");
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    scanf("%*c");

    // Exibindo Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibindo Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}

