#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[] = {2, 4, 6, 8, 10};
    int soma = 0;
    int i;
    
    for(i = 0; i < 5; i++){
        soma += A[i];
        printf("%d\n", soma);
    }
    printf("A soma dos elementos do array é: %d", soma);
    
    return 0;
}
