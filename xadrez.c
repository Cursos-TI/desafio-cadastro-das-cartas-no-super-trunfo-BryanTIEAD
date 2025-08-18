#include <stdio.h>

int main() {

    char estado1 = 'C';
    char codigo1[5] = "C01";
    char nomeCidade1[50] = "Fortaleza";
    int populacao1 = 2703391;
    float area1 = 314.93;
    float pib1 = 89.0;
    int pontosTuristicos1 = 40;

    char estado2 = 'P';
    char codigo2[5] = "P01";
    char nomeCidade2[50] = "Belem";
    int populacao2 = 1506420;
    float area2 = 1059.46;
    float pib2 = 47.4;
    int pontosTuristicos2 = 30;

    // Carta 1
    printf("=== Carta 1 (Fortaleza - Ceara) ===\n");
    printf("Digite a letra do estado [C]: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta [C01]: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade [Fortaleza]: ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao [2703391]: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km² [314.93]: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes de reais [89.0]: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos [40]: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    printf("\n=== Carta 2 (Belem - Para) ===\n");
    printf("Digite a letra do estado [P]: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta [P01]: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade [Belem]: ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao [1506420]: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km² [1059.46]: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais [47.4]: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos [30]: ");
    scanf("%d", &pontosTuristicos2);

    // Impressão dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);

    // Impressão dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

}
