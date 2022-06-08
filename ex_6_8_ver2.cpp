// Leia uma matriz 4x4 de números inteiros e imprima os
// elementos da diagonal principal e da diagonal secundária.

//essa versão permite seja possivel somar os elementos de uma linha de uma matriz com qualquer numero de linhas e colunas.
#include <stdio.h>
const int LINHAS = 4;
const int COLUNAS = 4;

int main() {
    int m[LINHAS][COLUNAS];
    int soma[LINHAS];
    
    // inicializa os elementos do vetor soma
    for (int i = 0; i < LINHAS; i++) {
        soma[i] = 0;
    }
    
    //ler os valores da matriz;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    //imprimir a diagonal principal e secundária
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            soma[i] += m[i][j];
        }
    }
    
    //imprimir
    printf("\nSoma linha 1: %d", soma[0]);
    printf("\nSoma linha 2: %d", soma[1]);
    printf("\nSoma total: %d", soma[0] + soma[1]);
}
