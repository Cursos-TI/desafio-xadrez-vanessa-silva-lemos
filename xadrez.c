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

    //Movimento Cavalo - loops aninhados
    // O cavalo move 2 casas para baixo e 1 casa para a esquerda (L)
    int casasBaixo = 2;
    int casasEsquerda = 1;
    printf("\nMovimento do Cavalo:\n");

    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n"); // Uma casa para baixo em cada iteração
    }
    int j = 1;
    while (j <= casasEsquerda) {
        printf("Esquerda\n"); // Ao final, uma casa para esquerda
        j++;
    }
    //Alternativamente para mostrar a estrutura aninhada:
    /*
    for (int i = 1; i <= 1; i++) {//só um "L"
        for (int j = 1; j <= casasBaixo; j++) {
            printf("Baixo\n");
        }
        int k = 1;
        while (k <= casasEsquerda) {
            printf("Esquerda\n");
            k++;
        }    
    }
    */

    return 0;
}
