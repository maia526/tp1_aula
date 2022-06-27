// Crie a função compara que lê dois valores x e y e
// retorna:

// -1: se x < y
// 0: se x = y
// 1: se x > y

#include <stdio.h>

int compara(int x, int y){
    if (x < y)
        return -1;
    if (x == y)
        return 0;
    if (x > y)
        return 1;
    return 4;
}

int main(){
    int x, y, m;
    printf("X: ");
    scanf("%d", &x);
    
    printf("Y: ");
    scanf("%d", &y);
    
    m = compara(x, y);
    printf("%d", m);
}
