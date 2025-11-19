#include <stdio.h>

/*
Função recursiva para o movimento da Torre.
Move 'casa' casas para a Direita.
*/

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

/*
Função recursiva para o movimento do Bisbo.
Move 'casas' casas na diagonal para  cima e direita
*/

void moverBispoAninhado(int casasVerticais, int casasHorizontais) {
    for (int v = 1; v <= casasVerticais; v++) {
        for (int h = 1; h <= casasHorizontais; h++) {
            printf("Cima, Direita\n");
        }
    }
}


void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

/*
Função recursiva para o movimento da rainha
Move 'casa' casas para a esquerda
*/
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

/*
Movimento complexo do cavalo com loops aninhados,
Multiplas variáveis e controle de fluxo.
Move duas casas para cima e uma para a direita
*/

void moverCavalo() {
    int casasCima = 2;
    int casasDireita = 1;
    int movimentosRealizados = 0;

    // Avança duas casas para cima
    for (int i = 1; i <= casasCima; i++) {
        if (movimentosRealizados >= 3) break;
        printf("Cima\n");
        movimentosRealizados++;
    }

    //Apos subir, avança uma casa para a direita
    for(int j = 1; j <= casasDireita; j++) {
        if (movimentosRealizados >= 3) break;
        printf("Direita\n");
        movimentosRealizados++;
    }


}

int main() {
    //Torre recursiva: 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    //Bispo recursivo: 5 casas na diagonal
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(5);

    printf("\n");

    //Bispo com  loops aninhados: 2 verticais, 2 horizontais (exemplo)
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoAninhado(2, 2);

    printf("\n");

    //Rainha recursiva: 8 casa para a esquerda
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    //Cavalo com loops complexos: 2 cima, 1 direita
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}