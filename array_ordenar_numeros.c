#include <stdlib.h>
#include <stdio.h>

int main() {
    int i,j, aux;
    int numeros[4];
    
    for(i = 0; i <= 4; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &numeros[i]);
    }
    
    for(i = 0; i <= 3; i++) {
        for (j = i+1; j <= 4; j++) {
            if (numeros[i] > numeros[j]) {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
    
    printf("\nA ordem dos números é: ");
    
    for(i = 0; i <= 4; i++) {
        printf("[%d]", numeros[i]);
    }
    
    return 0;
}
