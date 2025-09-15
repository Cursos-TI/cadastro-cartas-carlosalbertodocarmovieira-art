#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

 char Carta[1] = "1";
 char Estado[50] = "Bahia";
 char Codigo[15] = "B01";
 char Cidade[10] = "Salvador";
 int Populacao = 2418005;
 float Area = 692.589;
 float PIB = 62.954;
 int Turismos = 20;

  // Área para entrada de dados
  printf("Qual o Número da Carta:");
  scanf("%s", &Carta);

  printf("Qual o Estado:");
  scanf("%s", &Estado);

  printf("Qual o Código da Carta:");
  scanf("%s", &Codigo);

  printf("Qual a Cidade:");
  scanf("%s", &Cidade);

  printf("Qual a quantidade da Populacao:");
  scanf("%d", &Populacao);

  printf("Qual o Tamanho da Área:");
  scanf("%f", &Area);

  printf("Qual o PIB da Cidade:");
  scanf("%f", &PIB);

  printf("A quantidade de Turismo é:");
  scanf("%d", &Turismos);

  // Área para exibição dos dados da cidade

  printf("O Número da Carta é: %s\n", Carta);

  printf("O Estado é: %s\n", Estado);

  printf("O Código da Carta é: %s\n", Codigo);

  printf("A Cidade é: %s\n", Cidade);

  printf("A População é: %d\n", Populacao);

  printf("A Área é: %.3f\n", Area);

  printf("O PIB é: %.3f\n", PIB);

  printf("A quantidade de Turismo é: %d\n", Turismos);

return 0;
} 
