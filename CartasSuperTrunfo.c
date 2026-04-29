#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char estado[50];
    char codigo [50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int num_pontos;
  
    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite seu codigo: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);
  
    printf("Digite sua população: \n");
    scanf("%d", &população);

    printf("Digite sua área: \n");
    scanf("%f", &área);

    printf("Digite seu pib: \n");
    scanf("%f", &pib);

    printf("Digite numero pontos turisticos: \n");
    scanf("%d", &num_pontos);
  
    printf("Nome do Estado: %s\nCodigo: %s\n", estado, codigo);
    printf("Nome da Cidade: %s\nPopulação: %d\n", cidade, população);
    printf("Área: %f\nPIB: %f\n", area, pib);
    printf("Num_pontos: %d\n", num_pontos);

    return 0;
} 
