#include <stdio.h>

// --- Funções recursivas para Torre, Bispo e Rainha ---

// Torre: move-se 5 casas para a direita recursivamente
void moverTorre(int casas) {
    if (casas == 0) return; // caso base: terminou o movimento

    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo: usa recursividade e loops aninhados (externo vertical, interno horizontal)
// Move-se 5 casas na diagonal para cima e à direita
void moverBispo(int casas) {
    if (casas == 0) return; // caso base da recursão

    // Loop externo: movimento vertical para cima
    for (int i = 0; i < casas; i++) {
        // Loop interno: movimento horizontal para direita
        for (int j = 0; j < casas; j++) {
            // Para simular a diagonal, imprimimos a combinação das direções
            if (i == j) { 
                printf("Cima, Direita\n");
            }
        }
    }
}

// Alternativa para Bispo, só recursiva, usando dois parâmetros (vertical e horizontal)
void moverBispoRec(int casas, int passo) {
    if (passo == casas) return; // terminou movimento
    printf("Cima, Direita\n");
    moverBispoRec(casas, passo + 1);
}

// Rainha: move-se 8 casas para a esquerda recursivamente
void moverRainha(int casas) {
    if (casas == 0) return; // fim do movimento
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// --- Movimentação do Cavalo com loops aninhados complexos ---

void moverCavalo() {
    int casasVerticais = 2;
    int casasHorizontais = 1;

    // Movimento em "L": duas casas para cima e uma para a direita

    // Variáveis para controle dos loops
    int v = 0; // contador vertical
    int h = 0; // contador horizontal

    // Loop externo: controla o movimento vertical (2 casas para cima)
    for (v = 0; v < casasVerticais;) {
        // Loop interno com while para controlar o movimento horizontal
        h = 0;
        while (h < casasHorizontais) {
            // Imprime "Cima" para o movimento vertical
            printf("Cima\n");
            v++;

            // Se já completou o movimento vertical, sai do loop
            if (v >= casasVerticais) {
                break;
            }
        }

        // Após subir 2 casas, mover 1 casa para a direita
        if (h < casasHorizontais) {
            printf("Direita\n");
            h++;
        }

        // Se movimento horizontal completo, sai do loop externo
        if (h >= casasHorizontais) {
            break;
        }
    }

    // Para garantir as 2 casas para cima e 1 para a direita sem erros:
    // Se o movimento acima não imprimir exatamente 2 "Cima" e 1 "Direita", imprimimos manualmente:
    // Só para garantir no caso de lógica falha.
    // (Você pode comentar abaixo se preferir)
    /*
    int totalCima = 0;
    int totalDireita = 0;
    for (int i = 0; i < casasVerticais; i++) {
        printf("Cima\n");
        totalCima++;
    }
    for (int i = 0; i < casasHorizontais; i++) {
        printf("Direita\n");
        totalDireita++;
    }
    */
}

int main() {
    // Movimentação da Torre - recursiva
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimentação do Bispo - recursiva com loops aninhados
    printf("Movimento do Bispo:\n");
    // moverBispo(5); // Este método imprime repetido demais
    moverBispoRec(5, 0); // Mais fiel ao movimento de 5 casas na diagonal
    printf("\n");

    // Movimentação da Rainha - recursiva
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimentação do Cavalo - loops aninhados complexos
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
