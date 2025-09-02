#include <stdio.h>

int main() {
    // Carta 1 - Fortaleza
    char estado1[3] = "CE";
    char codigo1[5] = "C01";
    char nomeCidade1[50] = "Fortaleza";
    int populacao1 = 2703391;
    float area1 = 314.93;
    float pib1 = 89.0;
    int pontosTuristicos1 = 40;
    float densidade1 = 8586.56;
    float pibPerCapita1 = 32911.78;

    // Carta 2 - Belém
    char estado2[3] = "PA";
    char codigo2[5] = "P01";
    char nomeCidade2[50] = "Belem";
    int populacao2 = 1506420;
    float area2 = 1059.46;
    float pib2 = 47.4;
    int pontosTuristicos2 = 30;
    float densidade2 = 1421.83;
    float pibPerCapita2 = 31479.22;

    // Carta 1 - Entrada (usuário apenas aperta Enter)
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    scanf("%*c"); 
    printf("Código da carta (ex: C01): %s\n", codigo1);
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

    // Carta 2 - Entrada (usuário apenas aperta Enter)
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    scanf("%*c");
    printf("Código da carta (ex: P01): %s\n", codigo2);
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
