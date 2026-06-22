#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
int codigocarta;
char estado[3];
char cidade[50];
int populacao;
float area;
int pontosturisticos;
  
  // Área para entrada de dados

  scanf("%d", &codigocarta);
  scanf("%2s", estado);
  scanf("%49s", cidade);
  scanf("%d", &populacao);
  scanf("%f", &area);
  scanf("%d", &pontosturisticos);

  // Área para exibição dos dados da cidade

  printf("Código da carta: %d\n", codigocarta);
  printf("Estado: %s\n", estado);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", area);
  printf("Pontos turísticos: %d\n", pontosturisticos);
  
return 0;
} 
