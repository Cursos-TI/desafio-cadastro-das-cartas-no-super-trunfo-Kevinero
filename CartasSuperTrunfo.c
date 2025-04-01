#include  <stdio.h>
int main() {

char estado, estado2;
char codcarta [5], codcarta2[5], nomecidade[30], nomecidade2[30] ;
int populacao, populacao2, pontosturisticos, pontosturisticos2;
float area, area2, pib, pib2, densidade, densidade2, pibcapita, pibcapita2;

//Coletando os dados da primeira carta!

printf("**BEM VINDO AO JOGO SUPER TRUNFO***\nVamos cadastrar a primeira carta!\nDigite uma letra de 'A' até 'H':\n");
scanf(" %c", &estado);


printf("Digite entre 01 até 04:\n");
scanf(" %s", &codcarta);

getchar();

printf("Digite o nome da cidade:\n");
fgets(nomecidade, 30, stdin);

nomecidade[strcspn(nomecidade, "\n")] = 0;

printf("Digite o número da população:\n");
scanf(" %d", &populacao);

printf("Digite a área: km2\n");
scanf(" %f", &area);


printf("Digite o PIB: \n");
scanf(" %f", &pib);


printf("Digite o número de pontos turisticos: \n");
scanf(" %d", &pontosturisticos);

//Coletando os dados da segunda carta!!

printf("Agora vamos cadastrar a Segunda carta!!!\nDigite uma letra de 'A' até 'H':\n");
scanf(" %c", &estado2);

printf("Digite entre 01 até 04:\n");
scanf(" %s", &codcarta2);

getchar();

printf("Digite o nome da cidade:\n");
fgets(nomecidade2, 30, stdin);

nomecidade2[strcspn(nomecidade2, "\n")] = 0;

printf("Digite o número da população:\n");
scanf(" %d", &populacao2);

printf("Digite a área: km2\n");
scanf(" %f", &area2);


printf("Digite o PIB: \n");
scanf(" %f", &pib2);

printf("Digite o número de pontos turisticos: \n");
scanf(" %d", &pontosturisticos2);

//Desafio Aventureiro
densidade = (float)populacao / area;
densidade2 = (float)populacao2 / area2;
pibcapita = pib / (float)populacao;
pibcapita2 = pib2 / (float)populacao2;

//Imprimindo o resultado
// Carta 01
printf("***Carta 01***\nEstado: %c\n", estado);
printf("Código da carta: %c%s\n", estado, codcarta);
printf("Nome da cidade: %s\n", nomecidade);
printf("População: %d\n", populacao);
printf("Área: %.2f km2\n", area);
printf("PIB: %.2f\n", pib);
printf("Número de pontos turisticos: %d\n", pontosturisticos);
printf("Densidade Populacional: %.2f\n", densidade);
printf("PIB per Capita: %.2f\n", pibcapita);
//Cartas 02
printf("***Carta 02***\nEstado: %c\n", estado2);
printf("Código da carta: %c%s\n", estado2, codcarta2);
printf("Nome da cidade: %s\n", nomecidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km2\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de pontos turisticos: %d\n", pontosturisticos2);
printf("Densidade Populacional: %.2f\n", densidade2);
printf("PIB per Capita: %.2f\n", pibcapita2);

return 0;

}
