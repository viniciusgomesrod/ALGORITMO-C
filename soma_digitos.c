#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float somadosdigitos(float n) {
    // Convertendo o número float para uma string
    char str[20]; // Suficientemente grande para acomodar o número e sua parte decimal
    sprintf(str, "%.2f", n); // "%.2f" formata o float para duas casas decimais
    
    float soma = 0;
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            soma += str[i] - '0'; // Convertendo o caractere para o valor numérico correspondente
        }
    }
    
    return soma;
}

int main(void) {
    float numero;
    printf("Digite um numero float: ");
    scanf("%f", &numero);
    
    float resultado = somadosdigitos(numero);
    printf("A soma dos digitos de %.2f e %.2f\n", numero, resultado);
    
    return 0;
}
