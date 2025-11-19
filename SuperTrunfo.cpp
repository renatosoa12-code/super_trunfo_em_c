#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    // VARIAVEIS
    char estado1 = '\0', estado2 = '\0';
    char codigo1[5] = { 0 }, codigo2[5] = { 0 };
    char nome1[20] = { 0 }, nome2[20] = { 0 };
    int pop1 = 0, pop2 = 0, tur1 = 0, tur2 = 0;
    float area1 = 0.0f, area2 = 0.0f, pib1 = 0.0f, pib2 = 0.0f, den1 = 0.0f, den2 = 0.0f, pibpc1 = 0.0f, pibpc2 = 0.0f, super1 = 0.0f, super2 = 0.0f;

    // ENTRADA CARTA 1
    printf("================================================\n");
    printf("                   CARTA 1\n");
    printf("================================================\n\n");

    printf("Estado (Digite uma letra entre A e H): ");
    scanf(" %c", &estado1);

    printf("Codigo (A letra do estado seguida de um numero de 01 a 04): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nome1);

    printf("Populacao: ");
    scanf("%d", &pop1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &tur1);

    den1 = (float)pop1 / area1;
    pibpc1 = pib1 / (float)pop1;
    super1 = (float)pop1 + area1 + pib1 + (float)tur1 + pibpc1 + (1 / den1);

    // ENTRADA CARTA 2
    printf("================================================\n");
    printf("                   CARTA 2\n");
    printf("================================================\n\n");

    printf("Estado (Digite uma letra entre A e H): ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("Populacao: ");
    scanf("%d", &pop2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &tur2);

    den2 = (float)pop2 / area2;
    pibpc2 = pib2 / (float)pop2;
    super2 = (float)pop2 + area2 + pib2 + (float)tur2 + pibpc2 + (1 / den2);

    // EXIBIÇÃO DAS CATRAS
    printf("\n================================================\n");
    printf("                   CARTAS\n");
    printf("================================================\n\n");

    // EXIBIÇÃO CARTA 1
    printf("CARTA 1:\n\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", pop1);
    printf("Area (Em km2): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n\n", tur1);
    printf("Densidade Populacional: %.2f\n", den1);
    printf("PIB per Capita: %.2f\n", pibpc1);
    printf("Super Poder: %.2f\n\n", super1);

    //EXIBIÇÃO CARTA 2
    printf("CARTA 2:\n\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", pop2);
    printf("Area (Em km2): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", tur2);
    printf("Densidade Populacional: %.2f\n", den2);
    printf("PIB per Capita: %.2f\n", pibpc2);
    printf("Super Poder: %.2f\n", super2);

    printf("\n================================================\n");
    printf("                   RESULTADO\n");
    printf("================================================\n\n");

     // COMPARAR POPULAÇÃO
    if (pop1 > pop2) {
        printf("Populacao: Carta 1 venceu (1)\n");
    }
    else if (pop1 < pop2) {
        printf("Populacao: Carta 2 venceu (0)\n");
    }
    else {
        printf("Empate\n");
    }
    
    // COMPARAR AREA
    if (area1 > area2) {
        printf("Area: Carta 1 venceu (1)\n");
    }
    else if (area1 < area2) {
        printf("Area: Carta 2 venceu (0)\n");
    }
    else {
        printf("Empate\n");
    }

    // COMPARAR PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    }
    else if (pib1 < pib2) {
        printf("PIB: Carta 2 venceu (0)\n");
    }
    else {
        printf("Empate\n");
    }

    // COMPARAR PONTOS TURISTICOS
    if (tur1 > tur2) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    }
    else if (tur1 < tur2) {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }
    else {
        printf("Empate\n");
    }

    // COMPARAR DENSIDADE POPULACIONAL
    if (den1 > den2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    }
    else if (den1 < den2) {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }
    else {
        printf("Empate\n");
    }

    // COMPARAR PIB PER CAPTA
    if (pibpc1 > pibpc2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    }
    else if (pibpc1 < pibpc2) {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }
    else {
        printf("Empate\n");
    }

    // COMPARAR SUPER PODER
    if (super1 > super2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    }
    else if (super1 < super2) {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }
    else {
        printf("Empate\n");
    }

    printf("\n================================================\n");
    printf("                   FIM\n");
    printf("================================================\n\n");

    return 0;
}
