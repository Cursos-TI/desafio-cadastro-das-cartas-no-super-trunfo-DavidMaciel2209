#include <stdio.h>

int main() {
    // Carta 1
    char estado1[30], codigoCarta1[30], nomeCidade1[30];
    unsigned long int populacao1;
    float areaKm1;
    double pib1;
    int nPontosTuristicos1;
    float densidadePopulacional1;
    double pibPerCapita1, superPoder1;

    // Carta 2
    char estado2[30], codigoCarta2[30], nomeCidade2[30];
    unsigned long int populacao2;
    float areaKm2;
    double pib2;
    int nPontosTuristicos2;
    float densidadePopulacional2;
    double pibPerCapita2, superPoder2;

    // Entrada Carta 1
    printf("Digite os dados da primeira carta\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigoCarta1);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &areaKm1);
    printf("PIB: ");
    scanf("%lf", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &nPontosTuristicos1);

    // Entrada Carta 2
    printf("\nDigite os dados da segunda carta\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigoCarta2);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &areaKm2);
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &nPontosTuristicos2);

    // Cálculos Carta 1
    densidadePopulacional1 = (float)populacao1 / areaKm1;
    pibPerCapita1 = pib1 / (double)populacao1;
    double inversoPopulacional1 = 1.0 / densidadePopulacional1;
    superPoder1 = populacao1 + (double)areaKm1 + pib1 + nPontosTuristicos1 + pibPerCapita1 + inversoPopulacional1;

    // Cálculos Carta 2
    densidadePopulacional2 = (float)populacao2 / areaKm2;
    pibPerCapita2 = pib2 / (double)populacao2;
    double inversoPopulacional2 = 1.0 / densidadePopulacional2;
    superPoder2 = populacao2 + (double)areaKm2 + pib2 + nPontosTuristicos2 + pibPerCapita2 + inversoPopulacional2;

    // Saída Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaKm1);
    printf("PIB: %.2lf\n", pib1);
    printf("Pontos Turísticos: %d\n", nPontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2lf\n", pibPerCapita1);
    printf("Super Poder: %.3lf\n", superPoder1);

    // Saída Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2lf\n", pib2);
    printf("Pontos Turísticos: %d\n", nPontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2lf\n", pibPerCapita2);
    printf("Super Poder: %.3lf\n", superPoder2);

    // Comparação
    printf("***RESULTADO***\n");

 /*   
    printf("População: Carta 1 venceu %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu %d\n", areaKm1 > areaKm2);
    printf("PIB: Carta 1 venceu %d\n", pib1 > pib2);
    printf("Pontos turísticos: Carta 1 venceu %d\n", nPontosTuristicos1 > nPontosTuristicos2);
    printf("Densidade populacional: Carta 1 venceu %d\n", densidadePopulacional1 < densidadePopulacional2); // menor é melhor? 
    printf("PIB per Capita: Carta 1 venceu %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu %d\n", superPoder1 > superPoder2);   
*/

    int escolhaComparacao1 , escolhaComparacao2;

    printf("ESCOLHA O PRIMEIRO ATRIBUTO A SER COMPARADO: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de Pontos Turisticos \n");
    printf("5. Densidade demográfica \n");
    scanf("%d", &escolhaComparacao1);

    int resultado1, resultado2;

    switch (escolhaComparacao1)
    {
    case 1:
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        resultado1 = areaKm1 > areaKm2 ? 1 : 0;    
        break;
    case 3:
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        resultado1 = nPontosTuristicos1 > nPontosTuristicos2 ? 1 : 0;
        break;
    case 5:
        resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }


    printf("ESCOLHA O SEGUNDO ATRIBUTO A SER COMPARADO: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de Pontos Turisticos \n");
    printf("5. Densidade demográfica \n");
    scanf("%d", &escolhaComparacao2);

    if (escolhaComparacao1 == escolhaComparacao2)
    {
        printf("Você escolheu o mesmo atributo!!!");
    } else {
        switch (escolhaComparacao2)
    {
    case 1:
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        resultado2 = areaKm1 > areaKm2 ? 1 : 0;    
        break;
    case 3:
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        resultado2 = nPontosTuristicos1 > nPontosTuristicos2 ? 1 : 0;
        break;
    case 5:
        resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }
    }

    if (resultado1 == 1 && resultado2 == 1){
        printf("Carta 1 venceu!\n");}
        else if ((resultado1 == 1 && resultado2 == 0) || (resultado1 == 0 && resultado2 == 1)) {
    printf("Empate!\n");
        }
     else {
        printf("Carta 2 venceu!\n");
    }
    

    return 0;
}
