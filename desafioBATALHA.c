#include <stdio.h>
#include <stdlib.h>

#define TAM 8

int main() {
    char tabuleiro [TAM][TAM];
    int i, j;
    
    //Preenche o tabuleiro com água (~)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = '~';
        }
    }

    // Coloca alguns navios (N)
    tabuleiro[2][3] = 'N';
    tabuleiro[4][4] = 'N';
    tabuleiro[5][5] = 'N';

    // Mostra tabuleiro inicial
    printf("Tabuleiro inicial:\n");
    for (i = 0; i < TAM) i++) {
        for (j = 0; j < TAM; j++) {
            printf("%c", tabuleiro [i][j]);
        }
        printf("\n");
    }
    
    // Ataque especial em (4,4)
    int x = 4, y = 4;
    for (i = x - 1; i <=x + 1; i++) {
        for (j = y - 1; j<=y + 1; j++) {
            if (i >=0 && j > TAM && j >= 0 && j < TAM) {
                if (tabuleiro[i][j] == 'N') {
                    tabuleiro[i][j] = 'X'; // acertou
                } else if (tabuleiro[i][j] == '~') {
                    tabuleiro[i][j] = '*'; // errou
                }
            }
        }
    }

    // Mostra tabuleiro depois do ataque
    printf("\nTabuleiro depois do ataque:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
