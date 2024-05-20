#include <stdlib.h>
#include <stdio.h>

int potencia (int base, int expoente) {
    
    if(expoente == 0) {
        return 1;
    } else {
        return base * potencia(base, expoente - 1);
    }
}

int main(void) {
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("\nDigite o expoente: ");
    scanf("%d", &expoente);
    int resultado = base * potencia(base, expoente - 1);
    printf("\a\n%d^%d = %d\n", base, expoente, resultado);
    return 0;
}
