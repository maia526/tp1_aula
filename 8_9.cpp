#include <stdio.h>
#include <math.h>

int verificaTriangulo(float lado1, float lado2, float lado3)
{
    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2)
        return 0;
    else
        return 1;
}

void calculaDistancia(int x1, int y1, int x2, int y2, int x3, int y3)
{
   float dist1, dist2, dist3;
   int confere;
   dist1 = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));  // 1 2
   dist2 = sqrt(pow(x3-x2, 2) + pow(y3-y2,2));  // 2 3
   dist3 = sqrt(pow(x1-x3, 2) + pow(y1-y3,2));  // 3 1
   
   confere = verificaTriangulo(dist1, dist2, dist3);
   
   if (confere == 0)
       printf("Perimetro  = %f", dist1 + dist2 + dist3);
   if (confere == 1)
    printf("Nao e um triangulo.");
}

int main()
{
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
    
    calculaDistancia(x1, y1, x2, y2, x3, y3);
}
