#include <stdlib.h>
#include <stdio.h>

int saopares (int array[], int tamanho, int index) {
    if (index == tamanho) {
        return 1;
    }
    if (array[index] % 2 != 0) {
        return 0;
    }
    return saopares (array, tamanho, index + 1);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int index;
    int resultado = saopares(arr, tamanho, 0);
    if (resultado == 1) {
        printf("Todos os elementos do array são pares");
    } else {
        printf("Um ou mais elementos do array não são pares");
    }
    return 0;
}
