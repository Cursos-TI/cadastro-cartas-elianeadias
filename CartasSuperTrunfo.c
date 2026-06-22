#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

int codigo_carta;
char estado [3];
char cidade [50];
int populacao;
float area_km;
int pontosTuristicos;

  
  // Área para entrada de dados

printf("digite o codigo_carta: \n");
scanf("%d", &codigo_carta);

printf("Digite o estado: \n");
scanf("%s", estado);

printf("Digite o nome da cidade : \n");
scanf("%s", cidade);

printf("digite a populacao: \n");
scanf("%d", &populacao);

printf("digite a area: \n");
scanf("%f", &area_km);

printf("Digite numero de pontos turisticos: %d\n");
scanf("%d", &pontosTuristicos);

  // Área para exibição dos dados da cidade

printf("Codigo: %d\n", codigo_carta);
printf("Estado: %s\n", estado);
printf("Cidade: %s\n", cidade);
printf("populacao: %d\n", populacao);
printf("Area: %f\n", area_km);
printf("Pontos Turisticos: %d\n", pontosTuristicos);


return 0;

} 
