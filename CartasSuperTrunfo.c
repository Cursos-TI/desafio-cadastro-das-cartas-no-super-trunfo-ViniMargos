#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // CARTA 1
    char estado[50], nome_da_cidade;
    int codigo, populacao, quant_pontos_turisticos;
    float area_em_kmQuad, pib;

    // CARTA 2
    char estado2[50], nome_da_cidade2;
    int codigo2, populacao2, quant_pontos_turisticos2;
    float area_em_kmQuad2, pib2; 

    printf("------------------ Carta 1 ------------------\n");;
    printf("\n");   // Linha em branco

    printf("Estado: ");
    scanf("%s", &estado);

    printf("Codigo: %s0", estado);
    scanf("%d", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", &nome_da_cidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area em kmQuadrado: ");
    scanf("%f", &area_em_kmQuad);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &quant_pontos_turisticos);

    printf("\n");   // Linha em branco


    printf("------------------ Carta 2 ------------------\n");
    printf("\n");   // Linha em branco

    printf("Estado: ");
    scanf("%s", &estado2);

    printf("Codigo: %s0", estado2);
    scanf("%d", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", &nome_da_cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area em kmQuadrado: ");
    scanf("%f", &area_em_kmQuad2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &quant_pontos_turisticos2);

    printf("\n");   // Linha em branco
    return 0;
}
