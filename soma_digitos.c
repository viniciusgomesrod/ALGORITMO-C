#include <stdlib.h>
#include <stdio.h>

int somadosdigitos(int n) {
    if (n==0) {
        return 0;
    } else {
        return (n % 10) + somadosdigitos(n / 10);
    }
}
int main(void) {
    int numero = 12345;
    int resultado = somadosdigitos (numero);
    printf("A soma dos dígitos de %d é %d", numero, resultado);
    return 0;
}
    
