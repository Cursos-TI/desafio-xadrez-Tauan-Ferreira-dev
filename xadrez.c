#include <stdio.h>

int main() {
    // Definindo quantas casas cada peça vai se mover
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // --- Movimento da Torre ---
    // Torre se move em linha reta horizontalmente ou verticalmente
    // Vamos simular 5 casas para a direita usando for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");

    // --- Movimento do Bispo ---
    // Bispo se move na diagonal (ex: cima e direita)
    // Vamos simular 5 casas na diagonal para cima e direita usando while
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int passo_bispo = 1;
    while (passo_bispo <= casas_bispo) {
        printf("Casa %d: Cima, Direita\n", passo_bispo);
        passo_bispo++;
    }
    printf("\n");

    // --- Movimento da Rainha ---
    // Rainha se move em todas as direções
    // Vamos simular 8 casas para a esquerda usando do-while
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int passo_rainha = 1;
    do {
        printf("Casa %d: Esquerda\n", passo_rainha);
        passo_rainha++;
    } while (passo_rainha <= casas_rainha);

    return 0;
}
