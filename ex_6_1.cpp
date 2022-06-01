//Leia um vetor v com 10 números inteiros. Em seguida,
//imprima esses números na ordem inversa.
#include <stdio.h>

int main()
{
    int v[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf(" %d", v[i]);
    }
}
