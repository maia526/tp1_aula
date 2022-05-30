#include <stdio.h>
//Leia um número inteiro n e imprima a soma dos dígitos
//que compõem esse número. Dica: use o % para recuperar
//os dígitos do número.

int main()
{
   int n, soma = 0;
   printf("Numero: ");
   scanf("%d", &n);
   
   if (n > 0) {
       while (n > 0){
        // calcula e soma o resto
        soma += n % 10;
        
        // divide por 10
        n /= 10;
       }
       printf("Soma = %d", soma);
   }
   else 
    puts("Valor invalido.");
}
