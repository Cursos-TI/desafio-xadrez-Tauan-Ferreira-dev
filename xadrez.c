#include <stdio.h>

int main() {
    // Movimentação da Torre - 5 casas para a direita usando for
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo - 5 casas na diagonal para cima e à direita usando while
    int casasBispo = 5;
    int countBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (countBispo < casasBispo) {
        printf("Cima, Direita\n");
        countBispo++;
    }

    // Movimentação da Rainha - 8 casas para a esquerda usando do-while
    int casasRainha = 8;
    int countRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        countRainha++;
    } while (countRainha < casasRainha);

    // Movimentação do Cavalo - movimento em "L": 2 casas para baixo e 1 para a esquerda
    int casasParaBaixo = 2;
    int casasParaEsquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    // Loop for para as duas casas para baixo
    for (int i = 0; i < casasParaBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop do-while para a casa para a esquerda
    int countEsquerda = 0;
    do {
        printf("Esquerda\n");
        countEsquerda++;
    } while (countEsquerda < casasParaEsquerda);

    return 0;
}
