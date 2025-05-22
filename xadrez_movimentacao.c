// xadrez_movimentacao.c
// Este programa demonstra a movimentação de peças de xadrez (Bispo, Torre e Rainha)
// utilizando diferentes estruturas de repetição em C.
// Cada peça se move uma quantidade fixa de casas, definida por constantes.
// As direções são exibidas de forma clara e organizada.

#include <stdio.h>

// Constantes para quantidade de casas de cada peça
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

int main() {
    int i;
    printf("Movimentação do Bispo (5 casas na diagonal superior direita):\n");
    // Bispo: Diagonal superior direita (Cima + Direita)
    for(i = 0; i < CASAS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("-----------------------------\n");

    printf("Movimentação da Torre (5 casas para a direita):\n");
    // Torre: Direita
    int j = 0;
    while(j < CASAS_TORRE) {
        printf("Direita\n");
        j++;
    }
    printf("-----------------------------\n");

    printf("Movimentação da Rainha (8 casas para a esquerda):\n");
    // Rainha: Esquerda
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while(k < CASAS_RAINHA);
    printf("-----------------------------\n");

    return 0;
}
