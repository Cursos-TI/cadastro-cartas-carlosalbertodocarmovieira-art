#include <stdio.h>

int main(){
    char Carta[10];
    char Estado[10];
    char Codigo[10];
    char Cidade[10];
    int Populacao;
    float Area;
    float PIB;
    int Turismo;

    printf("Digite o Número da Carta: ");
    scanf("%s", Carta);
    printf("O Número da Carta é: %s\n", Carta);

    printf("Digite um Estado: ");
    scanf("%s", Estado);
    printf("O Estado é: %s\n", Estado);

    printf("Digite o Código da Carta: ");
    scanf("%s", Codigo);
    printf("O Código da Cidade é: %s\n", Codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", Cidade);
    printf("O Nome da Cidade é: %s\n", Cidade);
    
    printf("Digite a Populacao: ");
    scanf("%d", &Populacao);
    printf("A População Total é: %d\n", Populacao);

    printf("Digite a Área em KM: ");
    scanf("%f", &Area);
    printf("A Área Total é: %.3f\n", Area);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB);
    printf("O PIB é: %.3f\n", PIB);

    printf("Digite os Pontos Turisticos: ");
    scanf("%d", &Turismo);
    printf("O Total de Pontos Turisticos é: %d\n", Turismo);
}

    
























































