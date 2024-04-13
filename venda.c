#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float valorfinal, valor;
    int opcao, numparc;
    
    printf("Qual o valor da compra?\n");
    scanf("%lf", &valor);
    
    printf("=====================\n");
    printf("OPCOES DE PAGAMENTO\n");
    printf("=====================\n");
    printf("1 - Pagar à vista\n");
    printf("2 - Parcelar de 2x\n");
    printf("3 - Outras parcelas\n");
    printf("4 - Fechar menu\n");
    
    printf("Digite a opcão desejada: \n");
    scanf("%d", &opcao);

    if(opcao == 4) {
        printf("\nPrograma encerrado.");
    } else {
    
    switch(opcao) {
        case 1:
            valorfinal = valor * 0.9;
            printf("\nO valor a ser pago à vista é de R$%.2lf", valorfinal);
            break;
        case 2:
            valorfinal = valor / 2;
            printf("\nO valor a ser pago em 2x de R$%.2lf", valorfinal);
            break;
        case 3:
            int numparc = 0;
            printf("Digite o número de parcelas: ");
            scanf("%d", &numparc);
            valorfinal = (valor * 1.05) / numparc;
            printf("\nO valor a ser pago em %dx será de R$%.2lf", numparc, valorfinal);
        default:
        printf("\nOpcão inválida.");
    }
}
    return 0;    
}
