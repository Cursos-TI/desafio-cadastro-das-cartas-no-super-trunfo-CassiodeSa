#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    int codcidade;
    float populacao;
    int pib;
    int turismo;
    char nome[20];
    float area;

    printf("Informe o Código da cidade: \n");
    scanf("%d", &codcidade);

    printf("Informe o Nome da cidade: \n");
    scanf("%s", &nome);

    printf("Informe a População da cidade: \n");
    scanf("%f", &populacao);

    printf("Informe a Área da cidade: \n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade: \n");
    scanf("%d", &pib);
    
    printf("Informe a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turismo);

    printf("O Código da cidade é: %d\n", codcidade);
    printf("O Nome da cidade é: %s\n", nome);
    printf("A população da cidade é de: %d\n", populacao);
    printf("A área da cidade é de: %f\n", area);
    printf("O PIB da cidade é de: %d\n", pib);
    printf("A quantidade de pontos turíticos da cidade é: %d\n", turismo);

    return 0;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
}
