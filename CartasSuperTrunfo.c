#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    int num_carta;
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int num_pontos;
    float dens_populacional;
    float pib_per_capita;

    printf("Digite o numero da carta: \n");
    scanf("%d", &num_carta);

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo: \n");
    scanf("%s", &codigo);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);
  
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite numero de pontos turisticos: \n");
    scanf("%d", &num_pontos);

    dens_populacional = (float)populacao / area;
    //Multiplicamos o pib por 1 bilhao (1 seguido de 9 zeros)
    pib_per_capita = (pib * 1000000000) / (float)populacao;

    printf("\n--- CARTA CADASTRADA ---\n");
    printf("Nome do Estado: %s\nCodigo: %s\n", estado, codigo);
    printf("Nome da Cidade: %s\nPopulacao: %d\n", cidade, populacao);
    printf("Area: %.2f\nPIB: %.2f\n", area, pib);
    printf("Numero de pontos turisticos: %d\nCarta: %d\n", num_pontos, num_carta);

    printf("Densidade populacional: %.2f\n", dens_populacional);
    printf("Pib per capita: %.2f\n", pib_per_capita);

    return 0;
}  