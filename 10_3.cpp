// Leia um número n e, em seguida, leia n pontos cartesianos (x, y) que formam os vértices de um polígono. Ao final, chame a função perimetro que recebe os pontos
//cartesianos e retorna o perímetro do polígono.
#include <stdio.h>
#include <math.h>
struct Ponto{
    int x, y;
};


float calculaDistancia(Ponto ponto1, Ponto ponto2)
{
    float dist;
    dist = sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));
    return dist;
}

float perimetro(Ponto ponto[], int tamanho)
{
    float soma = 0;
    
    for (int i = 0; i < tamanho - 1; i++)
    {
        soma += calculaDistancia(ponto[i], ponto[i + 1]);
    }
    soma += calculaDistancia(ponto[tamanho - 1], ponto[0]);
    return soma;
}


int main()
{
    int tam;
    float per;
    printf("Quantidade de pontos: ");
    scanf("%d", &tam);
    Ponto poligono[tam];
    
    for (int i = 0; i < tam; i++)
    {
        printf("x: ");
        scanf("%d", &poligono[i].x);
        
        printf("y: ");
        scanf("%d", &poligono[i].y);
    }
    
    per = perimetro(poligono, tam);
    printf("\nPerimetro: %.3f", per);
}

