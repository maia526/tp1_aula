#include <stdio.h>
//Leia um número inteiro n e verifique se ele é ou não um número primo.

int main()
{
   int n, i;
   printf("N: ");
   scanf("%d", &n);
   bool e_primo = true;
   if (n > 0){
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            e_primo = false;
        }
    }
   
    if (e_primo)
        printf("\n%d e primo.", n);
    else
        printf("\n%d nao e primo.", n);
   }
   
   else
    puts("Numero invalido.");
}
