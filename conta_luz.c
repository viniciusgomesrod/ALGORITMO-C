#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float contafinal(float precoconta, int opcao) {
    return (precoconta * 0.75);
}

int main() {
    float precoconta, precofinal;
    int opcao;
    printf("Qual o preco da conta de luz? ");
    scanf("%f", &precoconta);
    printf("\nPossui benefício social? Se sim digite 1, se não, digite 2: ");
    scanf("%d", &opcao);
    if(opcao == 1){
        float resultado = contafinal(precoconta, opcao);
        printf("Sua conta teve desconto e custará: %.2f", resultado);
    } else if(opcao == 2) {
        printf("Sua conta não teve desconto.");
    }
    return 0;
}
