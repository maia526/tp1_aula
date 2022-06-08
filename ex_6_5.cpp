// Leia um número n e crie um vetor notas de tamanho n.
// Em seguida, leia as notas de n alunos. Por fim, imprima a
// média da turma e os alunos que tiraram acima da média.

#include <stdio.h>
int main() {
    int n, i, media, soma;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    
    int notas[i];
    for (i = 0; i < n; i ++) {
        printf("Aluno %d: ", i + 1);
        scanf("%d", &notas[i]);
        soma += notas[i];
    }
    media = soma / n;
    printf("Media: %d\n", media);
    for (i = 0; i < n; i ++) {
        if (notas[i] > media) {
            printf(" %d", notas[i]);
        }
    }
}
