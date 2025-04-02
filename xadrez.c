#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorre(int movimentos) {
    if (movimentos > 0) { 
        printf("Direita\n");
        moverTorre(movimentos - 1);
    }
}

// Função recursiva para mover o Bispo (com loops aninhados)
void moverBispo(int movimentos, int passo) {
    if (movimentos > 0) {
        for (int i = 0; i < passo; i++) { 
            printf("Cima, Direita\n");
        }
        moverBispo(movimentos - 1, passo);
    }
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int movimentos) {
    if (movimentos > 0) {
        printf("Esquerda\n");
        moverRainha(movimentos - 1);
    }
}

// Função para mover o Cavalo 
void moverCavalo() {
    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n");
}

int main() {
    printf("Torre:\n");
    moverTorre(5);
    printf("\n----------------------------------\n");

    printf("Bispo:\n");
    moverBispo(5, 1);
    printf("\n----------------------------------\n");

    printf("Rainha:\n");
    moverRainha(8);
    printf("\n----------------------------------\n");

    printf("Cavalo:\n");
    moverCavalo(); 

    return 0;
}

