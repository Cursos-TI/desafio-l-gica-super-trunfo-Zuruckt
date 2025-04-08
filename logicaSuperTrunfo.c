#include <stdio.h>

struct Card {
    char state[3];
    char code[3];
    char name[21];
    int population;
    float area;
    float gdp;
    int poi;
    float populationDensity;
    float gdpPerCapita;
    float superPower;
};

int main() {
    struct Card cardOne;
    struct Card cardTwo;

    int decision;

    printf("Cadastro de Cartas\n");

    printf("=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n");

    printf("Digite o Estado da Primeira Carta: ");
    scanf(" %2s", cardOne.state);

    printf("Digite o Código da Primeira Carta: ");
    scanf(" %2s", cardOne.code);

    printf("Digite o Nome da Primeira Carta: ");
    scanf(" %20s", cardOne.name);

    printf("Digite a População da Primeira Carta: ");
    scanf(" %d", &cardOne.population);
    
    printf("Digite a Área da Primeira Carta: ");
    scanf(" %f", &cardOne.area);

    printf("Digite o PIB da Primeira Carta: ");
    scanf(" %f", &cardOne.gdp);

    printf("Digite o Número de Pontos Turísticos da Primeira Carta: ");
    scanf(" %d", &cardOne.poi);

    printf("=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~==~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n");

    printf("Digite o Estado da Segunda Carta: ");
    scanf(" %2s", cardTwo.state);

    printf("Digite o Código da Segunda Carta: ");
    scanf(" %2s", cardTwo.code);

    printf("Digite o Nome da Segunda Carta: ");
    scanf(" %20s", cardTwo.name);

    printf("Digite a População da Segunda Carta: ");
    scanf(" %d", &cardTwo.population);
    
    printf("Digite a Área da Segunda Carta: ");
    scanf(" %f", &cardTwo.area);

    printf("Digite o PIB da Segunda Carta: ");
    scanf(" %f", &cardTwo.gdp);

    printf("Digite o Número de Pontos Turísticos da Segunda Carta: ");
    scanf(" %d", &cardTwo.poi);

    cardOne.populationDensity = cardOne.population / cardOne.area;
    cardTwo.populationDensity = cardTwo.population / cardTwo.area;

    cardOne.gdpPerCapita = cardOne.gdp / cardOne.population;
    cardTwo.gdpPerCapita = cardTwo.gdp / cardTwo.population;

    cardOne.superPower = (float) cardOne.population + (float) cardOne.poi + cardOne.area + (1 / cardOne.populationDensity) + cardOne.gdp, cardOne.gdpPerCapita;
    cardTwo.superPower = (float) cardTwo.population + (float) cardTwo.poi + cardTwo.area + (1 / cardTwo.populationDensity) + cardTwo.gdp, cardTwo.gdpPerCapita;
    printf("=~=~=~=~=~=~=~=~=~=~=Comparação de Cartas=~=~=~=~=~=~=~=~=~=~=\n");

    printf("Escolha o critério de comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");

    scanf(" %d", &decision);

    switch (decision)
    {
    case 1:
        printf("Comparando por População\n");
        printf("Carta 1 - %s (%s): %d\n", cardOne.name, cardOne.state, cardOne.population);
        printf("Carta 2 - %s (%s): %d\n", cardTwo.name, cardTwo.state, cardTwo.population);
        if (cardOne.population > cardTwo.population) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cardOne.name);
        } else if (cardTwo.population > cardOne.population) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cardTwo.name);
        } else {
            printf("Empate\n");
        }
        break;
    case 2:
        printf("Comparando por Área\n");
        printf("Carta 1 - %s (%s): %.2f\n", cardOne.name, cardOne.state, cardOne.area);
        printf("Carta 2 - %s (%s): %.2f\n", cardTwo.name, cardTwo.state, cardTwo.area);
        if (cardOne.area > cardTwo.area) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cardOne.name);
        } else if (cardTwo.area > cardOne.area) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cardTwo.name);
        } else {
            printf("Empate\n");
        }
        break;
    case 3:
        printf("Comparando por PIB\n");
        printf("Carta 1 - %s (%s): %.2f\n", cardOne.name, cardOne.state, cardOne.gdp);
        printf("Carta 2 - %s (%s): %.2f\n", cardTwo.name, cardTwo.state, cardTwo.gdp);
        if (cardOne.gdp > cardTwo.gdp) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cardOne.name);
        } else if (cardTwo.gdp > cardOne.gdp) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cardTwo.name);
        } else {
            printf("Empate\n");
        }
        break;
    case 4:
        printf("Comparando por Número de Pontos Turísticos\n");
        printf("Carta 1 - %s (%s): %d\n", cardOne.name, cardOne.state, cardOne.poi);
        printf("Carta 2 - %s (%s): %d\n", cardTwo.name, cardTwo.state, cardTwo.poi);
        if (cardOne.poi > cardTwo.poi) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cardOne.name);
        } else if (cardTwo.poi > cardOne.poi) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cardTwo.name);
        } else {
            printf("Empate\n");
        }
        break;
    case 5:
        printf("Comparando por Densidade Populacional\n");
        printf("Carta 1 - %s (%s): %.2f\n", cardOne.name, cardOne.state, cardOne.populationDensity);
        printf("Carta 2 - %s (%s): %.2f\n", cardTwo.name, cardTwo.state, cardTwo.populationDensity);
        if (cardOne.populationDensity < cardTwo.populationDensity) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cardOne.name);
        } else if (cardTwo.populationDensity < cardOne.populationDensity) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cardTwo.name);
        } else {
            printf("Empate\n");
        }
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}