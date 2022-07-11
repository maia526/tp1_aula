// Leia o código, a descrição, o preço e a quantidade vendida de n produtos, onde n deve ser fornecido pelo usuário. Ao final, imprima todos os produtos lidos com todos
//os seus dados e o valor total da venda.
#include <stdio.h>
struct Produto{
  int codigo, n;
  float preco;
  char descricao[270];
};

int main()
{
    int tam;
    printf("Quantidade de produtos: ");
    scanf("%d", &tam);
    Produto produto[tam];
    
    for (int i = 0; i < tam; i++)
    {
        printf("Codigo: ");
        scanf("%d", &produto[i].codigo);
        
        getchar();
        printf("Descricao: ");
        gets(produto[i].descricao);
        
        printf("Preco: ");
        scanf("%f", &produto[i].preco);
        
        printf("Quantidade vendida: ");
        scanf("%d", &produto[i].n);
    }
    
    puts("\n");
    puts("\n");
    
    for (int i = 0; i < tam; i++)
    {
        printf("\nProduto %d:\n", produto[i].codigo);
        printf("'%s'", produto[i].descricao);
        printf("\nPreco: %.2f", produto[i].preco);
        printf("\n%d unidades vendidas.\n", produto[i].n);
        printf("Total de vendas: %.2f\n", produto[i].n * produto[i].preco);
    }
}
