// Crie a função fatorial que lê um número inteiro n e retorna n! ou -1, se n < 0.

//funciona com n <= 20 devido ao limite do long long
#include <stdio.h>

void fatorial(int n){
    long long fat = 1;
    for(int i = n; i > 0; i--){
        fat *= i;
    }
    printf("Fatorial de %d = %lld", n, fat);
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    fatorial(n);
}
