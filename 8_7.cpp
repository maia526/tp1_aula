// Crie a função menor que recebe os valores a, b e c e retorna o menor deles. Na função main, leia 3 valores e chame a função implementada.

#include <stdio.h>
#include <stdlib.h>

int retornaMenor(int a, int b, int c){
    if (c < a && c < b)
        return c;
    if (a < b && a < c)
        return a;
    if (b < a && b < c)
        return b;
    if (a == b && a == c){
        printf("Valores iguais.");
        exit(1);  //break só funciona com loops. exit(1) da biblioteca <stdli.h> para o programa imediatamente;
    }
}

int main(){
    int a, b, c, x;
    printf("A: ");
    scanf("%d", &a);
    
    printf("B: ");
    scanf("%d", &b);
    
    printf("C: ");
    scanf("%d", &c);
    
    x = retornaMenor(a, b, c);
    printf("Menor: %d", x);
}
