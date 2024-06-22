#include <stdio.h>
#include <stdlib.h>

int somadosnumeros (int v1, int v2) {
    return v1 + v2;
}

int subtracaodosnumeros (int v1, int v2) {
    return v1 - v2;
}

int produtodosnumeros (int v1, int v2) {
    return v1 * v2;
}

int divisaodosnumeros (int v1, int v2) {
    return v1 / v2;
}

int main() {
    int v1, v2, soma, subtracao, produto, divisao;
    
    printf("Digite o 1° número: ");
    scanf("%d", &v1);
    printf("Digite o 2° número: ");
    scanf("%d", &v2);
    
    soma = somadosnumeros(v1, v2);
    produto = produtodosnumeros(v1, v2);
    divisao = divisaodosnumeros(v1, v2);
    subtracao = subtracaodosnumeros(v1, v2);
    
    printf("(%d) + (%d) = (%d)\n", v1, v2, soma);
    printf("(%d) - (%d) = (%d)\n", v1, v2, subtracao);
    printf("(%d) * (%d) = (%d)\n", v1, v2, produto);
    printf("(%d) / (%d) = (%d)\n", v1, v2, divisao);

    return 0;
}
