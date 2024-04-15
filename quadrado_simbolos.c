#include <stdio.h>
#include <stdlib.h>

int main() {
    int lado, i, j;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &lado);

    // Loop para imprimir as linhas
    for (i = 0; i < lado; i++) {
        // Loop para imprimir os caracteres de cada linha
        for (j = 0; j < lado; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
