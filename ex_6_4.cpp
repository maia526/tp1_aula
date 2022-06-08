// Leia um número n e crie um vetor v de inteiros de
// tamanho n. Em seguida, leia os valores de v e, por fim,
// inverta os valores de v (primeiro para último, segundo para
// penúltimo, etc.).

#include <stdio.h>
int main() {
    int n, i;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    
    if (n > 0) {
        int v[n];
        //ler os valores de v
        for (i = 0; i < n; i++){
            printf("numero %d: ", i + 1);
            scanf("%d", &v[i]);
        }
        
        //inverter os valores de v;
        int j = n -1;
        for (i = 0; i < n/2; i++) {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            j--;
        }
        
        //imprimir v ao contrário
        for (i = 0; i < n; i++) {
            printf(" %d", v[i]);
        }
        
    }
    else
        puts("valor invalido.");
}
