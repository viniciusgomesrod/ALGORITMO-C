#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[10], B[10], C[10];
    int i;

    // Recebendo os valores do array A
    printf("Digite 10 numeros inteiros para o array A:\n");
    for(i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // Recebendo os valores do array B
    printf("Digite 10 numeros inteiros para o array B:\n");
    for(i = 0; i < 10; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // Calculando o array C como C = A - B
    for(i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    // Mostrando os valores do array C
    printf("Valores do array C (C = A - B):\n");
    for(i = 0; i < 10; i++) {
        printf("C[%d]: %d\n", i, C[i]);
    }

    return 0;
}
