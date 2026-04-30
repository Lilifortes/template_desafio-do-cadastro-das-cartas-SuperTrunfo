#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int num_pontos;

     
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
  
    printf("\n--- CARTA CADASTRADA ---\n");
    printf("Nome do Estado: %s\nCodigo: %s\n", estado, codigo);
    printf("Nome da Cidade: %s\nPopulacao: %d\n", cidade, populacao);
    printf("Area: %.2f\nPIB: %.2f\n", area, pib);
    printf("Pontos Turisticos: %d\n", num_pontos);

    return 0;
} 
