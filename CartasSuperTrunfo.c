#include <stdio.h>

int main() {
    // variáveis para armazenamento dos dados da carta número 1.
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populaçao1;
    float area1;
    float pib1;
    int pTuristicos1;

    // variáveis para armazenamento dos dados da carta número 2.
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pTuristicos2;
    
    // comandos para solicitação e impressao dos dados inseridos pelo usuário, para a carta número1.
    printf("insira o estado: \n");
    scanf("%s", &estado1);

    printf("insira o codigo da carta: \n");
    scanf("%s", &codigo1);

    printf("insira a cidade: \n");
    scanf("%s", &cidade1);

    printf("insira a população: \n");
    scanf("%d", &populaçao1);

    printf("insira a área da cidade: \n");
    scanf("%f", &area1);

    printf("insira o PIB: \n");
    scanf("%f", &pib1);

    printf("insira o número de pontos turísticos: \n");
    scanf("%d", &pTuristicos1);

    return 0;
}
