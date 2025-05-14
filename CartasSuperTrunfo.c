#include <stdio.h>

int main(){

    char estado1[30];
    char codigoCarta1[30];
    char nomeCidade1[30];
    int populacao1;
    float areaKm1;
    float pib1;
    int nPontosTuristicos1;

    char estado2[30];
    char codigoCarta2[30];
    char nomeCidade2[30];
    int populacao2;
    float areaKm2;
    float pib2;
    int nPontosTuristicos2;

   printf("Digite os dados da primeira carta \n");
   printf("Digite o estado da carta: ");
   scanf("%s", &estado1);
   printf("Digite o código da carta: ");
   scanf("%s", &codigoCarta1);
   printf("Digite o nome da cidade: ");
   scanf("%s", &nomeCidade1);
   printf("Digite a população dessa cidade: ");
   scanf("%d", &populacao1);
   printf("Digite a area em km² dessa cidade: ");
   scanf("%f", &areaKm1);
   printf("Digite o PIB dessa cidade: ");
   scanf("%f", &pib1);
   printf("Digite o número de pontos turisticos dessa cidade: ");
   scanf("%d", &nPontosTuristicos1); 

   printf("Digite os dados da segunda carta \n");
   printf("Digite o estado da carta: ");
   scanf("%s", &estado2);
   printf("Digite o código da carta: ");
   scanf("%s", &codigoCarta2);
   printf("Digite o nome da cidade: ");
   scanf("%s", &nomeCidade2);
   printf("Digite a população dessa cidade: ");
   scanf("%d", &populacao2);
   printf("Digite a area em km² dessa cidade: ");
   scanf("%f", &areaKm2);
   printf("Digite o PIB dessa cidade: ");
   scanf("%f", &pib2);
   printf("Digite o número de pontos turisticos dessa cidade: ");
   scanf("%d", &nPontosTuristicos2); 

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código da Carta: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área em km²: %.2f \n", areaKm1);
    printf("PIB: %f \n", pib1);
    printf("Número de Pontos Turisticos: %d \n", nPontosTuristicos1);

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código da Carta: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área em km²: %.2f \n", areaKm2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turisticos: %d \n", nPontosTuristicos2);

}