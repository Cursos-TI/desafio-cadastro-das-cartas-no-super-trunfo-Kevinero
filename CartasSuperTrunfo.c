#include <stdio.h>

int main() {
    char estado, estado2; // Variaveis do codigo
    char codcarta[5], codcarta2[5], nomecidade[30], nomecidade2[30];
    int pontosturisticos, pontosturisticos2, opcao;
    float area, area2, pib, pib2, densidade, densidade2, pibcapita, pibcapita2; 
    unsigned long int populacao, populacao2; 


    // Coletando os dados da primeira carta
    printf("**BEM VINDO AO JOGO SUPER TRUNFO***\nVamos cadastrar a primeira carta!\nDigite uma letra de 'A' até 'H':\n");
    scanf(" %c", &estado);

    printf("Digite entre 01 até 04:\n");
    scanf(" %s", codcarta);

    printf("Digite o nome da cidade:\n");
    scanf("\n");
    fgets(nomecidade, 30, stdin);

    printf("Digite o número da população:\n");
    scanf(" %lu", &populacao);

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
    scanf(" %lu", &populacao2);

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
    
        // Escolha de comparação
    printf("Escolha qual atributo será comparado:\n");
    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    printf("3. PIB\n");
    printf("4. Densidade\n");
    printf("5. PIB per capita\n");
    scanf("%d", &opcao);
    
    printf("Carta 1: %s VS Carta 2: %s", nomecidade, nomecidade2);

    switch (opcao) {
        case 1:
            printf("Carta 1: %lu VS Carta 2: %lu\n", populacao, populacao2);
            if (populacao > populacao2)
                printf("Carta 1 venceu!\n");
            else if (populacao < populacao2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
            case 2:
            printf("Carta 1: %d VS Carta 2: %d\n", pontosturisticos, pontosturisticos2);
            if (pontosturisticos > pontosturisticos2)
                printf("Carta 1 venceu!\n");
            else if (pontosturisticos < pontosturisticos2)
                printf("Carta 2 venceu!\n");
            else
                printf("Resutado deu Empate!\n");
            break;
            case 3:
            printf("Carta 1: %.2f VS Carta 2: %.2f\n", pib, pib2);
            if (pib > pib2)
                printf("Carta 1 venceu!\n");
            else if (pib < pib2)
                printf("Carta 2 venceu!\n");
            else
                printf("Resutado deu Empate!\n");
            break;
            case 4:
            printf("Carta 1: %.2f VS Carta 2: %.2f\n", densidade, densidade2);
            if (densidade > densidade2)
                printf("Carta 2 venceu!\n");
            else if (densidade < densidade2)
                printf("Carta 1 venceu!\n");
            else
                printf("Resutado deu Empate!\n");
            break;
            case 5:
            printf("Carta 1: %.2f VS Carta 2: %.2f\n", pibcapita, pibcapita2);
            if (pibcapita > pibcapita2)
                printf("Carta 1 venceu!\n");
            else if (pibcapita < pibcapita2)
                printf("Carta 2 venceu!\n");
            else
                printf("Resutado deu Empate!\n");
            break;
            default:
            printf("Opção invalida tente novamente!");
            break;
    }
  }