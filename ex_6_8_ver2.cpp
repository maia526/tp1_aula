// Leia uma matriz 4x4 de números inteiros e imprima os
// elementos da diagonal principal e da diagonal secundária.
#include <stdio.h>
const int LINHAS = 4;
const int COLUNAS = 4;
//essa versão permite somar os elementos de uma linha de uma matriz com qualque numero de linhas e colunas.
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
    int total = 0;
    for (int i = 0; i < LINHAS; i++) {
        printf("\nSoma linha %d: %d", i+1, soma[i]);
        total += soma[i];
    }
    printf("\nTotal: %d\n", total);
}
