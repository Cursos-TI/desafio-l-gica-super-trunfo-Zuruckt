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
    
    printf("Carta 1 - %s (%s): %d\n", cardOne.name, cardOne.state, cardOne.population);
    printf("Carta 2 - %s (%s): %d\n", cardTwo.name, cardTwo.state, cardTwo.population);

    if (cardOne.population > cardTwo.population) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cardOne.name);
    } else if (cardTwo.population > cardOne.population) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cardTwo.name);
    } else {
        printf("Empate\n");
    }
    
    return 0;
}