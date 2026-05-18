#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main(){
    // ================= VARIÁVEIS CARTA 1 =================
    int num_carta1, populacao1, num_pontos1;
    char estado1[50], codigo1[50], cidade1[50];
    float area1, pib1, dens_populacional1, pib_per_capita1, super_poder1;

    // ================= VARIÁVEIS CARTA 2 =================
    int num_carta2, populacao2, num_pontos2;
    char estado2[50], codigo2[50], cidade2[50];
    float area2, pib2, dens_populacional2, pib_per_capita2, super_poder2;

    // Variável para a comparação (0 ou 1)
    int resultado;

    // ================= ENTRADA DE DADOS - CARTA 1 =================
    printf("--- CADASTRO DA CARTA 1 ---\n");
    printf("Digite o numero da carta: \n"); scanf("%d", &num_carta1);
    printf("Digite o estado: \n"); scanf("%s", estado1);
    printf("Digite o codigo: \n"); scanf("%s", codigo1);
    printf("Digite a cidade: \n"); scanf("%s", cidade1);
    printf("Digite a populacao: \n"); scanf("%d", &populacao1);
    printf("Digite a area: \n"); scanf("%f", &area1);
    printf("Digite o pib: \n"); scanf("%f", &pib1);
    printf("Digite numero de pontos turisticos: \n"); scanf("%d", &num_pontos1);

    // ================= ENTRADA DE DADOS - CARTA 2 =================
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    printf("Digite o numero da carta: \n"); scanf("%d", &num_carta2);
    printf("Digite o estado: \n"); scanf("%s", estado2);
    printf("Digite o codigo: \n"); scanf("%s", codigo2);
    printf("Digite a cidade: \n"); scanf("%s", cidade2);
    printf("Digite a populacao: \n"); scanf("%d", &populacao2);
    printf("Digite a area: \n"); scanf("%f", &area2);
    printf("Digite o pib: \n"); scanf("%f", &pib2);
    printf("Digite numero de pontos turisticos: \n"); scanf("%d", &num_pontos2);

    // ================= CÁLCULOS CARTA 1 =================
    dens_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;
    float dens_invertida1 = 1.0 / dens_populacional1;
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pib_per_capita1 + dens_invertida1 + (float)num_pontos1;

    // ================= CÁLCULOS CARTA 2 =================
    dens_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;
    float dens_invertida2 = 1.0 / dens_populacional2;
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pib_per_capita2 + dens_invertida2 + (float)num_pontos2;

    // ================= EXIBIÇÃO DOS DADOS DA CARTA 1 =================
    printf("\n--- CARTA 1 CADASTRADA ---\n");
    printf("Nome do Estado: %s\nCodigo: %s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\nPopulacao: %d\n", cidade1, populacao1);
    printf("Area: %.2f\nPIB: %.2f\n", area1, pib1);
    printf("Numero de pontos turisticos: %d\nCarta: %d\n", num_pontos1, num_carta1);
    printf("Densidade populacional: %.2f\n", dens_populacional1);
    printf("Pib per capita: %.2f\n", pib_per_capita1);
    printf("Super poder: %.2f\n", super_poder1);

    // ================= EXIBIÇÃO DOS DADOS DA CARTA 2 =================
    printf("\n--- CARTA 2 CADASTRADA ---\n");
    printf("Nome do Estado: %s\nCodigo: %s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\nPopulacao: %d\n", cidade2, populacao2);
    printf("Area: %.2f\nPIB: %.2f\n", area2, pib2);
    printf("Numero de pontos turisticos: %d\nCarta: %d\n", num_pontos2, num_carta2);
    printf("Densidade populacional: %.2f\n", dens_populacional2);
    printf("Pib per capita: %.2f\n", pib_per_capita2);
    printf("Super poder: %.2f\n", super_poder2);

    // ================= SEÇÃO DE COMPARAÇÃO (SAÍDA 0 OU 1) =================
    printf("\n=== RESULTADO DA COMPARACAO (1: Carta 1 Ganhou / 0: Carta 2 Ganhou) ===\n");

    resultado = populacao1 > populacao2;
    printf("Populacao: %d\n", resultado);

    resultado = area1 > area2;
    printf("Area: %d\n", resultado);

    resultado = pib1 > pib2;
    printf("PIB: %d\n", resultado);

    resultado = num_pontos1 > num_pontos2;
    printf("Pontos Turisticos: %d\n", resultado);

    // Densidade: Menor valor vence (Carta 1 ganha se for MENOR que a Carta 2)
    resultado = dens_populacional1 < dens_populacional2;
    printf("Densidade Populacional: %d\n", resultado);

    resultado = pib_per_capita1 > pib_per_capita2;
    printf("PIB per Capita: %d\n", resultado);

    resultado = super_poder1 > super_poder2;
    printf("Super Poder: %d\n", resultado);

    return 0;
}