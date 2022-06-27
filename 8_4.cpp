// Crie a função modulo que lê um número real x e retorna
// |x|.

#include <stdio.h>

void modulo(float x){
    if(x < 0)
        x *= -1;
    printf("Modulo = %.2f", x);
}

int main(){
    float x;
    printf("Digite um número: ");
    scanf("%f", &x);
    modulo(x);
}
