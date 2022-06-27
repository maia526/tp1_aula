// Crie a função perimetro que recebe como parâmetros os valores (x1, y1), (x2, y2) e (x3, y3), que representam pontos
// de um triângulo, e retorna o perímetro desse triângulo. Caso os 3 pontos não formem um triângulo, retorne zero. Na
// função main, leia esses valores e chame a função implementada. Dica: use a função distancia.

#include <stdio.h>
#include <math.h>

void calculaDistancia(int x1, int y1, int x2, int y2, int x3, int y3){
   float dist1, dist2, dist3;
   dist1 = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));  // 1 2
   dist2 = sqrt(pow(x3-x2, 2) + pow(y3-y2,2));  // 2 3
   dist3 = sqrt(pow(x1-x3, 2) + pow(y1-y3,2));  // 3 1
   
   verificaTriangulo(dist1, dist2, dist3);
}

void verificaTriangulo(int dist1, int dist2, int dist3){
    if (dist 1 < dist2 + dist3 && dist2 < dist1 + dist3 && dist3)
}

int main(){
    int x1, x2, x3, y1, y2, y3;
    printf("x1: ");
    scanf("%d", &x1);
    
    printf("y1: ");
    scanf("%d", &y1);
    
    printf("x2: ");
    scanf("%d", &x2);
    
    printf("y2: ");
    scanf("%d", &y2);
    
    printf("x3: ");
    scanf("%d", &x3);
    
    printf("y3: ");
    scanf("%d", &y3);
    
    retornaDistancia(x1, y1, x2, y2, x3, y3);
}
