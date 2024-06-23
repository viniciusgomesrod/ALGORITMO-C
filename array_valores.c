#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int i, j; // contador de linha e coluna
    printf("Entrada de dados\n");
    printf("Digite os valores para a matriz:\n");
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            printf("\nElemento [%d] [%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Saída de dados\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\nA matriz é: [%d] [%d] = %d\n", i, j, matriz[i][j]);

        }
    }
    
    return 0;
}
