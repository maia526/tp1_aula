// Leia uma matriz 2x3 de números inteiros e imprima o
// somatório de cada linha e o somatório total.
#include <stdio.h>
const int LINHAS = 2;
const int COLUNAS = 3;
int main() {
    int m[LINHAS][COLUNAS];
    int soma1 = 0, soma2 = 0;
    
    //ler os valores da matriz;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    //somar os valores da matriz
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (i == 0)
                soma1 += m[i][j];
            else
                soma2 += m[i][j];
        }
    }
    
    //imprimir
    printf("\nSoma linha 1: %d", soma1);
    printf("\nSoma linha 2: %d", soma2);
    printf("\nSoma total: %d", soma1 + soma2);
}
