// Crie a função distancia que recebe os valores (x1, y1) e (x2, y2), que representam pontos em um plano cartesiano, e retorna a distância euclidiana entre esses 
//pontos. Na função main, leia esses valores e chame a função implementada.

#include <stdio.h>
#include <math.h>

void retornaDistancia(int x1, int y1, int x2, int y2){
   float dist;
   dist = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
   printf("Distancia: %.2f", dist);
}

int main(){
    int x1, x2, y1, y2;
    printf("x1: ");
    scanf("%d", &x1);
    
    printf("y1: ");
    scanf("%d", &y1);
    
    printf("x2: ");
    scanf("%d", &x2);
    
    printf("y2: ");
    scanf("%d", &y2);
    
    retornaDistancia(x1, y1, x2, y2);
}
