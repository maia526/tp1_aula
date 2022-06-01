// Leia um vetor v com 10 números inteiros. Em seguida,
// imprima o somatório dos números desse vetor.
#include <stdio.h>

int main()
{
    int v[10], soma = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        soma += i;
    }
    for (int i = 0; i < 10; i++) {
        printf(" %d", v[i]);
    }
    printf("\nSoma: %d", soma);
}
