// Leia nome, peso e altura de 5 pessoas e, ao final, imprima o nome e o IMC de todas elas (IMC = peso / altura2)
#include <stdio.h>
struct pessoa{
    char nome[20];
    float peso, altura, imc;
};

int main()
{
    pessoa cinco[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("\nNome: ");
        gets(cinco[i].nome);
        
        printf("Peso: ");
        scanf("%f", &cinco[i].peso);
        
        printf("Altura (m): ");
        scanf("%f", &cinco[i].altura);
        getchar();
        
        cinco[i].imc = cinco[i].peso / (cinco[i].altura * cinco[i].altura);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("\nNome: %s", cinco[i].nome);
        printf("\nPeso: %.2f", cinco[i].peso);
        printf("\nAltura: %.2f", cinco[i].altura);
        printf("\nIMC: %.2f", cinco[i].imc);
        puts("\n");
        
    }
}
