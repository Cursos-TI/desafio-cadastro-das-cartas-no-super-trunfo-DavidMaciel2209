#include <stdio.h>

int main(){

    char estado1[30];
    char codigoCarta1[30];
    char nomeCidade1[30];
    int populacao1;
    float areaKm1;
    double pib1;
    int nPontosTuristicos1;
    float densidadePopulacional1;
    double pibPerCapita1;

    char estado2[30];
    char codigoCarta2[30];
    char nomeCidade2[30];
    int populacao2;
    float areaKm2;
    double pib2;
    int nPontosTuristicos2;
    float densidadePopulacional2;
    double pibPerCapita2;

    printf("Digite os dados da primeira carta \n");
    printf("Digite o estado da carta: ");
    scanf("%s", estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Digite a população dessa cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a area em km² dessa cidade: ");
    scanf("%f", &areaKm1);
    printf("Digite o PIB dessa cidade: ");
    scanf("%lf", &pib1);
    printf("Digite o número de pontos turisticos dessa cidade: ");
    scanf("%d", &nPontosTuristicos1); 

    printf("Digite os dados da segunda carta \n");
    printf("Digite o estado da carta: ");
    scanf("%s", estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Digite a população dessa cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a area em km² dessa cidade: ");
    scanf("%f", &areaKm2);
    printf("Digite o PIB dessa cidade: ");
    scanf("%lf", &pib2);
    printf("Digite o número de pontos turisticos dessa cidade: ");
    scanf("%d", &nPontosTuristicos2); 

    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código da Carta: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área em km²: %.2f \n", areaKm1);
    printf("PIB: %.2lf \n", pib1);
    printf("Número de Pontos Turisticos: %d \n", nPontosTuristicos1);
    densidadePopulacional1 =  (float) populacao1 / areaKm1;
    printf("A densidade populacional da carta 1 é: %.2f\n", densidadePopulacional1);
    pibPerCapita1 =  pib1 / (double) populacao1;
    printf("O PIB per Capita da carta 1 é: %.2lf\n", pibPerCapita1);

    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código da Carta: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área em km²: %.2f \n", areaKm2);
    printf("PIB: %.2lf \n", pib2);
    printf("Número de Pontos Turisticos: %d \n", nPontosTuristicos2);
    densidadePopulacional2 =  (float) populacao2 / areaKm2;
    printf("A densidade populacional da carta 2 é: %.2f\n", densidadePopulacional2);
    pibPerCapita2 =  pib2 / (double) populacao2;
    printf("O PIB per Capita da carta 2 é: %.2lf\n", pibPerCapita2);

    return 0;
}
