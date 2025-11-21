#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    // VARIÁVEIS
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nome1[20], nome2[20];
    int pop1, pop2, tur1, tur2;
    float area1, area2, pib1, pib2;
    float den1, den2, pibpc1, pibpc2, super1, super2;
    int escolha1 = 0, escolha2 = 0;

    // ==============================
    // ENTRADA CARTA 1
    // ==============================
    printf("================================================\n");
    printf("                   CARTA 1\n");
    printf("================================================\n\n");

    printf("Estado: "); scanf(" %c", &estado1);
    printf("Codigo: "); scanf("%s", codigo1);
    printf("Nome da cidade: "); scanf("%s", nome1);
    printf("Populacao: "); scanf("%d", &pop1);
    printf("Area: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos turisticos: "); scanf("%d", &tur1);

    den1 = pop1 / area1;
    pibpc1 = pib1 / pop1;
    super1 = pop1 + area1 + pib1 + tur1 + pibpc1 + (1 / den1);

    // ==============================
    // ENTRADA CARTA 2
    // ==============================
    printf("\n================================================\n");
    printf("                   CARTA 2\n");
    printf("================================================\n\n");

    printf("Estado: "); scanf(" %c", &estado2);
    printf("Codigo: "); scanf("%s", codigo2);
    printf("Nome da cidade: "); scanf("%s", nome2);
    printf("Populacao: "); scanf("%d", &pop2);
    printf("Area: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos turisticos: "); scanf("%d", &tur2);

    den2 = pop2 / area2;
    pibpc2 = pib2 / pop2;
    super2 = pop2 + area2 + pib2 + tur2 + pibpc2 + (1 / den2);


    // ===============================================
    // ATRIBUTOS E NOMES PARA MENU (C puro)
    // ===============================================

    const char* nomes[7] = {
        "Populacao",
        "Area",
        "PIB",
        "Pontos Turisticos",
        "Densidade Demografica",
        "PIB per Capita",
        "Super Poder"
    };

    float valores1[7] = { (float)pop1, area1, pib1, (float)tur1, den1, pibpc1, super1 };
    float valores2[7] = { (float)pop2, area2, pib2, (float)tur2, den2, pibpc2, super2 };

    // ===============================================
    //     ESCOLHA DE DOIS ATRIBUTOS DIFERENTES
    // ===============================================
    printf("\n================================================\n");
    printf("         ESCOLHA DOIS ATRIBUTOS DIFERENTES\n");
    printf("================================================\n\n");

    // ---------- MENU 1 ----------
    printf("Escolha o primeiro atributo:\n");
    for (int i = 0; i < 7; i++) {
        printf("[%d] %s\n", i + 1, nomes[i]);
    }

    do {
        printf("\nPrimeiro atributo: ");
        scanf("%d", &escolha1);
    } while (escolha1 < 1 || escolha1 > 7);

    // ---------- MENU 2 DINÂMICO ----------
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");

    for (int i = 0; i < 7; i++) {
        if (i + 1 != escolha1)
            printf("[%d] %s\n", i + 1, nomes[i]);
    }

    do {
        printf("\nSegundo atributo: ");
        scanf("%d", &escolha2);
    } while (escolha2 < 1 || escolha2 > 7 || escolha2 == escolha1);


    // ===============================================
    //            COMPARAÇÃO INDIVIDUAL
    // ===============================================

    float v1_a1 = valores1[escolha1 - 1];
    float v2_a1 = valores2[escolha1 - 1];
    float v1_a2 = valores1[escolha2 - 1];
    float v2_a2 = valores2[escolha2 - 1];

    int pontos1 = 0, pontos2 = 0;

    // ---- Atributo 1 ----
    if (escolha1 == 5) {   // densidade → menor vence
        if (v1_a1 < v2_a1) pontos1++;
        else if (v1_a1 > v2_a1) pontos2++;
    }
    else {               // maior vence
        if (v1_a1 > v2_a1) pontos1++;
        else if (v1_a1 < v2_a1) pontos2++;
    }

    // ---- Atributo 2 ----
    if (escolha2 == 5) {
        if (v1_a2 < v2_a2) pontos1++;
        else if (v1_a2 > v2_a2) pontos2++;
    }
    else {
        if (v1_a2 > v2_a2) pontos1++;
        else if (v1_a2 < v2_a2) pontos2++;
    }

    // ===============================================
    //              SOMA DOS ATRIBUTOS
    // ===============================================
    float soma1 = v1_a1 + v1_a2;
    float soma2 = v2_a1 + v2_a2;


    // ===============================================
    //                   RESULTADO
    // ===============================================
    printf("\n================================================\n");
    printf("                   RESULTADO\n");
    printf("================================================\n\n");

    printf("Cidades comparadas: %s  x  %s\n\n", nome1, nome2);

    printf("Atributos utilizados:\n");
    printf("1) %s\n", nomes[escolha1 - 1]);
    printf("2) %s\n\n", nomes[escolha2 - 1]);

    printf("Valores comparados:\n");
    printf("%s: %.2f vs %.2f\n", nomes[escolha1 - 1], v1_a1, v2_a1);
    printf("%s: %.2f vs %.2f\n\n", nomes[escolha2 - 1], v1_a2, v2_a2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n\n", nome2, soma2);

    printf("Resultado final: ");
    if (soma1 > soma2) printf("Carta 1 venceu!\n");
    else if (soma2 > soma1) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    printf("\n================================================\n");
    printf("                     FIM\n");
    printf("================================================\n\n");

    return 0;
}
