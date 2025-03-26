#include <stdio.h>

int main() {

    // Todos os variaveis com final "1" é para carta 01 e Final "2" é para segunda carta.
    char estado1, estado2; // A a H
    char codcarta1[50], nomecidade1[50], codcarta2[50], nomecidade2[50]; // codigo da carta
    int populacao1, pontos1, populacao2, pontos2; // Número de população e Pontos turisticos
    float area1, pib1, area2, pib2;

    printf("Bem vindo ao jogo Super Trunfo!!!\nVamos cadastrar a priemira carta do jogo.\n");

    printf("Digite Uma Letra Entre 'A' a 'H': \n");
    scanf("%c", &estado1);

    printf("Digite O Código Da Carta Entre Os Números 1 a 4: \n");
    scanf("%s", &codcarta1);
   
    printf("Digite Nome De Uma Cidade Deste Estado: \n");
    scanf("%s", &nomecidade1);

    printf("Digite O Número De População Desta Cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite A Área em km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o Número De Pontos Turisticos: \n");
    scanf("%d", &pontos1);

    printf("Agora vamos cadastrar a Segunda Carta!\n");

    printf("Digite Uma Letra entre 'A' e 'H': \n");
    scanf("%c", &estado2);

    printf("Digite O Código Da Carta Entre Os Números 1 a 4: \n");
    scanf("%s", &codcarta2);
   
    printf("Digite Nome De Uma Cidade Deste Estado: \n");
    scanf("%s", &nomecidade2);

    printf("Digite O Número De População Desta Cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite A Área em km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o Número De Pontos Turisticos: \n");
    scanf("%d", &pontos2);












    return 0;
}
