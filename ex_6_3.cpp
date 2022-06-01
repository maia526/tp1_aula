//Leia um vetor v com 10 números inteiros. Em seguida,
//imprima todos os pares e, depois, todos os ímpares do vetor.
#include <stdio.h>

int main()
{
    int v[10], soma = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        soma += i;
    }
    printf("\nPares: ");
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            printf(" %d", i);
        }
    }
    printf("\nImpares: ");
    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0)
            printf(" %d", i);
    }
    printf("\nSoma: %d", soma);
}
