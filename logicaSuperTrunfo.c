#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Comparação da população
    printf("\n=== Comparacao de Cartas ===\n");

    if (populacao1 > populacao2) {
        printf("Populacao: %s venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Populacao: %s venceu!\n", nomeCidade2);
    } else {
        printf("Populacao: Empate!\n");
    }

    // Comparação da área
    if (area1 > area2) {
        printf("Area: %s venceu!\n", nomeCidade1);
    } else if (area2 > area1) {
        printf("Area: %s venceu!\n", nomeCidade2);
    } else {
        printf("Area: Empate!\n");
    }

    // Comparação do PIB
    if (pib1 > pib2) {
        printf("PIB: %s venceu!\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("PIB: %s venceu!\n", nomeCidade2);
    } else {
        printf("PIB: Empate!\n");
    }

    // Comparação dos pontos turísticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turisticos: %s venceu!\n", nomeCidade1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Pontos Turisticos: %s venceu!\n", nomeCidade2);
    } else {
        printf("Pontos Turisticos: Empate!\n");
    }

    return 0;
}