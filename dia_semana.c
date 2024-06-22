#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero_dia;
    
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &numero_dia);
    
    switch(numero_dia){
        case 1: 
            printf("Domingo");
        break;
        case 2: 
            printf("Segunda");
        break;
        case 3: 
            printf("Terça");
        break;
        case 4: 
            printf("Quarta");
        break;
        case 5: 
            printf("Quinta");
        break;
        case 6: 
            printf("Sexta");
        break;
        case 7: 
            printf("Sábado");
        break;
        default:
        printf("Valor inválido!\n");
    }
    return 0;
}
