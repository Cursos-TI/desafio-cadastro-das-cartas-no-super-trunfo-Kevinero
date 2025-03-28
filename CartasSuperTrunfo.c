#include <stdio.h>

int main() {

    // Todos os variaveis com final "1" é para carta 01 e Final "2" é para segunda carta.
    char estado1, estado2; 
    char codcarta1[4], nomecidade1[30], codcarta2[4], nomecidade2[30]; 
    int populacao1, pontos1, populacao2, pontos2; 
    float area1, pib1, area2, pib2;

    printf("Bem vindo ao jogo Super Trunfo!!!\nVamos cadastrar a priemira carta do jogo.\n");

    printf("Digite Uma Letra Entre 'A' a 'H': \n");
    scanf(" %c", &estado1);

    printf("Digite O Código Da Carta Entre Os Números 1 a 4: \n");
    scanf(" %s", &codcarta1);
   
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

    printf("Agora Vamos Cadastrar a Segunda Carta!\n");

    printf("Digite Uma Letra Entre 'A' a 'H': \n");
    scanf(" %c", &estado2);

    printf("Digite O Código Da Carta Entre Os Números 1 a 4: \n");
    scanf(" %s", &codcarta2);
   
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

printf("Resultado\n");//Resultado dos comandos.

printf("Carta 1\nEstado: %c\n", estado1);
printf("Codigo Da Carta: %c%s\n", estado1, codcarta1);
printf("Nome Cidade: %s\n", nomecidade1);
printf("População: %d\n", populacao1);
printf("Área: %f KM2\n", area1);
printf("PIB: %f Bilhões De Reais\n", pib1);
printf("Número De Pontos Turisticos: %d\n", pontos1);


printf("Carta 2\nEstado: %c\n", estado2);
printf("Codigo Da Carta: %c%s\n", estado2, codcarta2);
printf("Nome Cidade: %s\n", nomecidade2);
printf("População: %d\n", populacao2);
printf("Area Quadrada km: %f\n", area2);
printf("PIB: %f\n", pib2);
printf("Número De Pontos Turisticos: %d\n", pontos2);

    return 0;
}
