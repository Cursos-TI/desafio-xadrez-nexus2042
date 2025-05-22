#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    int casasTorre = 5;
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int casasBispo = 5;
    int j = 0;
    while (j < casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int casasRainha = 8;
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);
    printf("\n");

    return 0;
}