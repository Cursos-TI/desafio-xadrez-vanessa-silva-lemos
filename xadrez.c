#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //Movimento da Torre - uso for
    // A torre se move 5 casas para a direita (horizontal)
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    //Movimento do Bispo - usar while
    // O Bispo se move 5 casas na diagonal para cima e para a direita
    int casasBispo = 5;
    int passoBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (passoBispo <= casasBispo) {
        printf("Cima, Direita\n");
        passoBispo++;
    }

    // Movimento Rainha - usar do-while
    // A rainha se move 8 casas para a esquerda (horizontal)
    int casasRainha = 8;
    int passoRainha = 1;
    printf("\nMovimento Rainha:\n");
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha <= casasRainha);

    return 0;
}
