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

    // Carta 2 - Belém
    char estado2[3] = "PA";
    char codigo2[5] = "P01";
    char nomeCidade2[50] = "Belem";
    int populacao2 = 1506420;
    float area2 = 1059.46;
    float pib2 = 47.4;
    int pontosTuristicos2 = 30;

    // Carta 1 - Entrada (scanf real, mas já preenchido)
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a sigla do estado: ");
    scanf("%s", estado1);
    printf("A sigla do estado é: %s\n", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("O código da carta é: %s\n", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("O nome da cidade é: %s\n", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("A população da cidade é: %d\n", populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    printf("A área em km² da cidade é: %.2f\n", area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("O PIB da cidade é: %.2f\n", pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("A quantidade de pontos turísticos na cidade é de: %d\n", pontosTuristicos1);

    // Carta 2 - Entrada (scanf real, mas já preenchido)
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a sigla do estado: ");
    scanf("%s", estado2);
    printf("A sigla do estado é: %s\n", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("O código da carta é: %s\n", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("O nome da cidade é: %s\n", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("A população da cidade é: %d\n", populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("A área em km² da cidade é: %.2f\n", area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("O PIB da cidade é: %.2f\n", pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("A quantidade de pontos turísticos na cidade é de: %d\n", pontosTuristicos2);

    // Exibindo as cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
