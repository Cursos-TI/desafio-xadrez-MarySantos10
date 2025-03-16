#include <stdio.h>

#define BISPO 5
#define TORRE 5
#define RAINHA 8

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= BISPO; i++) {
        printf("Diagonal superior direita - Passo %d\n", i);
    }

    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    for (int i = 1; i <= TORRE; i++) {
        printf("Direita - Passo %d\n", i);
    }

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    for (int i = 1; i <= RAINHA; i++) {
        printf("Esquerda - Passo %d\n", i);
    }

    return 0;
}