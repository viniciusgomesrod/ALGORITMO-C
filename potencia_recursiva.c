#include <stdlib.h>
#include <stdio.h>

int potencia (int base, int expoente) {
    
    if(expoente == 0) {
        return 1;
    } else {
        return base * potencia(base, expoente-1);
    }
}

int main(void) {
    int base = 2;
    int expoente = 3;
    int resultado = potencia(base, expoente);
    printf("%d^%d = %d\n", base, expoente, resultado);
    return 0;
}
