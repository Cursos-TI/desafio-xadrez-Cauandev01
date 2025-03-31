#include <stdio.h>

int main(){
    
    printf("Torre:\n");

    for (int i = 0; i < 5; i++){
        printf("Direita.\n"); // move a torre para a direita
    }

    printf("----------------------------------\n");

    printf("Bispo:\n");

    int b = 0;

    while (b < 5)
    {
        printf("Cima, direita.\n"); // move o bispo para cima e direita
        b++;
    }

    printf("----------------------------------\n");

    printf("Rainha:\n");

    int r = 0;

    do
    {
        printf("Esquerda.\n"); // move a Rainha para a esquerda
        r++;
    } while (r < 8);

    return 0;
    


    
}