#include <stdio.h>

// Função recursiva para mover a Torre para a Direita
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para mover a Rainha para a Esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para o movimento diagonal do Bispo
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Função com loops aninhados para o movimento do Bispo (vertical + horizontal)
void moverBispoComLoops(int casas) {
    printf("\nBispo com loops aninhados:\n");
    for (int i = 0; i < casas; i++) { // movimento vertical
        for (int j = 0; j < 1; j++) { // horizontal (1 por vez)
            printf("Cima Direita\n");
        }
    }
}

// Movimento complexo do Cavalo: 2 casas para cima e 1 para a direita
void moverCavalo() {
    printf("\nMovimento do Cavalo (Cima, Direita):\n");
    int movimentosFeitos = 0;

    // loop externo para direção vertical
    for (int i = 0; i < 3; i++) {
        if (i >= 2) break; // limita a duas casas para cima
        printf("Cima\n");
        movimentosFeitos++;

        // loop interno para a casa horizontal
        for (int j = 0; j < 2; j++) {
            if (j == 1) {
                printf("Direita\n");
                movimentosFeitos++;
                break; // sai após 1 movimento à direita
            } else {
                continue; // ignora j == 0
            }
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    // -------------------------
    // Movimento da Torre (recursiva)
    // -------------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // -------------------------
    // Movimento do Bispo (recursiva)
    // -------------------------
    printf("\nMovimento do Bispo (Recursão):\n");
    moverBispoRecursivo(casasBispo);

    // -------------------------
    // Movimento do Bispo com loops aninhados
    // -------------------------
    moverBispoComLoops(casasBispo);

    // -------------------------
    // Movimento da Rainha (recursiva)
    // -------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // -------------------------
    // Movimento do Cavalo (loops complexos)
    // -------------------------
    moverCavalo();

    return 0;
}

