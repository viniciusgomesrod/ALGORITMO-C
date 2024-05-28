#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int menor;

    // Recebendo os valores da matriz
    printf("Digite os valores da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializando o menor valor com o primeiro elemento da matriz
    menor = matriz[0][0];

    // Encontrando o menor valor na matriz
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    // Imprimindo o menor valor encontrado na matriz
    printf("O menor valor contido na matriz e: %d\n", menor);

    return 0;
}
