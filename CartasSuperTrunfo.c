#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
int código da carta;
char estado;
char cidade;
int população;
float área;
int pontos turísticos;
  
  // Área para entrada de dados

  printf("Código da carta: %d\n");
  printf("Estado: s\n");
  printf("Cidade: s\n");
  printf("População: %d\n");
  printf("Área: %f\n");
  printf("Pontos turísticos: %d\n");
  
  // Área para exibição dos dados da cidade

  scanf("%d", &código);
  scanf("%s", &estado);
  scanf("%s", &cidade);
  scanf("%d", &população);
  scanf("%2.f", &area);
  scanf("%d", &pontos turísticos);

  
return 0;
} 
