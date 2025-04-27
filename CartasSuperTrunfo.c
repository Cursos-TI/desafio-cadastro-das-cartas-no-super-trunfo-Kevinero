#include <stdio.h>

int main() {
    char estado, estado2; // Variaveis do codigo
    char codcarta[5], codcarta2[5], nomecidade[30], nomecidade2[30];
    int pontosturisticos, pontosturisticos2;
    float area, area2, pib, pib2, densidade, densidade2, pibcapita, pibcapita2; 
    unsigned long int populacao, populacao2, ; 

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

    // Calculando a densidade populacional
    densidade = (float)populacao / area;
    densidade2 = (float)populacao2 / area2;
    pibcapita = pib / (float)populacao;
    pibcapita2 = pib2 / (float)populacao2;

    

    // Calculando densidade populacional
    densidade = 1 / densidade;
    densidade2 = 1 / densidade2;
    
    //Nivel novato na logica de programação: incluindo a logica no programa A comparação será feita pelo pib
    printf("Comparação das cartas Atributo (PIB)\n");
    printf("Carta 01 -%s:%.2f\n", nomecidade, pib);
    printf("Carta 02 -%s:%.2f \n", nomecidade2, pib2);
    if (pib > pib2) {
        printf("Resultado: Carta 1 (%s) Venceu!!\n", nomecidade);
    } else {
        printf("Resultado: Carta 02 (%s) Venceu!!\n", nomecidade2);
    }

    return 0;
}