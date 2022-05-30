#include <stdio.h>
//Leia um valor inteiro n e, logo após, solicite a leitura
//de n números inteiros. Ao final, informe qual o foi o maior e
//o menor número lido.

int main()
{
    int n, numero, menor, maior;
    
    printf("Digite a qtd. de valores: ");
    scanf("%d", &n);
    
    if (n > 0) {
        // Ler n valores inteiros
        
        bool primeira_vez = true;       //primeiro numero
        while (n > 0) {     //Enquanto n não for igual a 0
            printf("\nDigite o valor: ");   //recebe n numeros inteiros
            scanf("%d", &numero);
            if (primeira_vez) {     //se for o primeiro numero inserido
                menor = numero;     //ele assume tanto a posição de maior quanto a de menor
                maior = numero;
                primeira_vez = false;       //próximo número não seguirá mais esse if
            }
            n--; //n decresce 1, quando chegar em 0 o while não será mais válido
            if (numero < menor)     //verifica se o número inserido é menor ou maior que o que ocupa a posição previamente
                menor = numero;
            if (numero > maior)
                maior = numero;
        }
        printf("\nMaior numero: %d", maior);        //imprime o maior e o menor número fornecido
        printf("\nMenor numero: %d", menor);
    }
    else 
        puts("Valor invalido, rode novemnte.");     //Se o valor de n fornecido for menor que zero, o while não roda
        
    
    
    
    
    
        
    /*
    if (n > 0) {
        // Ler n valores inteiros
        for (int i =1; i <= n; i++) {
            prinf("Digite um valor: ");
            scanf("%d", &numero);
            
            if (i == 1){
                menor = numero;
                maior = numero;
            }
            else {
                if (numero < menor)
                    menor = numero;
                if (numero > maior)
                    maior = numero;
            }
    }
        }
    else 
        puts("Valor invalido, rode novemnte.");
    
    */
}
