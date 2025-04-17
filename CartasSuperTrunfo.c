#include <stdio.h>

int main() {
    char estado, estado2;
    char codcarta[5], codcarta2[5], nomecidade[30], nomecidade2[30];
    int pontosturisticos, pontosturisticos2, resultadopontos;
    float area, area2, pib, pib2, densidade, densidade2, pibcapita, pibcapita2, superpodercarta1, superpodercarta2; 
    float resultadosp, resultadopibc, resultadodensidade, resuladopib, resultadoarea;
    unsigned long int populacao, populacao2, resultadopopulacao; //Nivel Mestre

    // Coletando os dados da primeira carta
    printf("**BEM VINDO AO JOGO SUPER TRUNFO***\nVamos cadastrar a primeira carta!\nDigite uma letra de 'A' até 'H':\n");
    scanf(" %c", &estado);

    printf("Digite entre 01 até 04:\n");
    scanf(" %s", codcarta);

    printf("Digite o nome da cidade:\n");
    scanf("\n");
    fgets(nomecidade, 30, stdin);

    printf("Digite o número da população:\n");
    scanf(" %d", &populacao);

    printf("Digite a área: km2\n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf(" %d", &pontosturisticos);

    // Coletando os dados da segunda carta
    printf("Agora vamos cadastrar a Segunda carta!!!\nDigite uma letra de 'A' até 'H':\n");
    scanf(" %c", &estado2);

    printf("Digite entre 01 até 04:\n");
    scanf(" %s", codcarta2);

    printf("Digite o nome da cidade:\n");
    scanf("\n");
    fgets(nomecidade2, 30, stdin);

    printf("Digite o número da população:\n");
    scanf(" %d", &populacao2);

    printf("Digite a área: km2\n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turisticos: \n");
    scanf(" %d", &pontosturisticos2);

    // Desafio nivel Aventureiro
    densidade = (float)populacao / area;
    densidade2 = (float)populacao2 / area2;
    pibcapita = pib / (float)populacao;
    pibcapita2 = pib2 / (float)populacao2;

    // Imprimindo o resultado
    printf("***Carta 01***\nEstado: %c\n", estado);
    printf("Código da carta: %c%s\n", estado, codcarta);
    printf("Nome da cidade: %s", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turisticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", pibcapita);

    printf("***Carta 02***\nEstado: %c\n", estado2);
    printf("Código da carta: %c%s\n", estado2, codcarta2);
    printf("Nome da cidade: %s", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibcapita2);

    // Desafio Mestre
    densidade = 1 / densidade;
    densidade2 = 1 / densidade2;
    superpodercarta1 = ((float)populacao + area + pib + (float)pontosturisticos + densidade + pibcapita);
    superpodercarta2 = ((float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + densidade2 + pibcapita2);

    // Comparações entre as cartas
    resultadopopulacao = populacao > populacao2;
    resultadoarea = area > area2;
    resuladopib = pib > pib2;
    resultadopontos = pontosturisticos > pontosturisticos2;
    resultadodensidade = densidade < densidade2;
    resultadopibc = pibcapita > pibcapita2;
    resultadosp = superpodercarta1 > superpodercarta2;

    // Impressão dos resultados.
    printf("***Comparação das Cartas***\nSe o resultado for '1' a carta 01 é a vencedora, se for '0' a carta 02 ganhou!\n");
    printf("A carta vencedora da População: %.1ld\n", resultadopopulacao);
    printf("A carta vencedora da Área: %.1f\n", resultadoarea);
    printf("A carta vencedora do PIB: %.1f\n", resuladopib);
    printf("A carta vencedora dos Pontos Turísticos: %.1d\n", resultadopontos);
    printf("A carta vencedora da Densidade Populacional: %.1f\n", resultadodensidade);
    printf("A carta vencedora do PIB per Capita: %.1f\n", resultadopibc);
    printf("A carta vencedora do Super Poder: %.1f\n", resultadosp);

    return 0;
}