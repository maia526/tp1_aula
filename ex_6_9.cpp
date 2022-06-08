// Leia uma matriz 4x4 de números inteiros e imprima os
// elementos da diagonal principal e da diagonal secundária.
#include <stdio.h>
const int LINHAS = 4;
const int COLUNAS = 4;

int main() {
    int m[LINHAS][COLUNAS];

    //ler os valores
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    //imprimir a diagonal principal
    puts("Diagonal principal: ");
    for (int i = 0; i < 4; i++) {
        printf(" %d", m[i][i]);
    }

    puts("Diagonal secundaria: ");
    for (int i = 0; i < 4; i++)
        printf(" %d", m[i][4-i-1]);
}
