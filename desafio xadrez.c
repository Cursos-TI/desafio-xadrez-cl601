#include <stdio.h>

int main() {
    // Definindo o número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== Movimento da Torre ===\n");
    // Torre: se move horizontal ou vertical
    // Vamos usar 'for' para simular 5 casas para a direita
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // Cada passo da Torre
    }

    printf("\n=== Movimento do Bispo ===\n");
    // Bispo: se move na diagonal
    // Vamos usar 'while' para simular 5 casas na diagonal para cima e à direita
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Cada passo do Bispo
        contadorBispo++;
    }

    printf("\n=== Movimento da Rainha ===\n");
    // Rainha: se move em todas as direções
    // Vamos usar 'do-while' para simular 8 casas para a esquerda
    int contadorRainha = 0;
    do {
        printf("Esquerda\n"); // Cada passo da Rainha
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
