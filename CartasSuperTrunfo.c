#include <stdio.h>

int main() {
    // variáveis para armazenamento dos dados da carta número 1.
    char estado1[50];
    char codigo1[50];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pTuristicos1;

    // variáveis para armazenamento dos dados da carta número 2.
    char estado2[20];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pTuristicos2;
    
    // comandos para solicitação e impressao dos dados inseridos pelo usuário, para a carta número1.
    printf("insira o estado: \n");
    scanf("%s", estado1);

    printf("insira o codigo da carta: \n");
    scanf("%s", codigo1);

    printf("insira a cidade: \n");
    scanf("%s", cidade1);

    printf("insira a população: \n");
    scanf("%d", &populacao1);

    printf("insira a área da cidade: \n");
    scanf("%f", &area1);

    printf("insira o PIB: \n");
    scanf("%f", &pib1);

    printf("insira o número de pontos turísticos: \n");
    scanf("%d", &pTuristicos1);
    

    printf("insira o estado: \n");
    scanf("%s", estado2);

    printf("insira o código: \n");
    scanf("%s", codigo2);

    printf("insira a cidade: \n");
    scanf("%s", cidade2);

    printf("insira a população: \n");
    scanf("%d", &populacao2);

    printf("insira a área: \n");
    scanf("%f", &area2);

    printf("insira o PIB: \n");
    scanf("%f", &pib2);

    printf("insira o número de pontos turísticos: \n");
    scanf("%d", &pTuristicos2);

    printf("estado: %s\n", estado1);
    printf("código: %s\n", codigo1);
    printf("cidade: %s\n", cidade1);
    printf("população: %d\n", populacao1);
    printf("área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("pontos turísticos: %d\n", pTuristicos1);

    printf("estado: %s\n", estado2);
    printf("código: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("pontoos turísticos: %d\n", pTuristicos2);



    return 0;
}
