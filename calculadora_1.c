    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    
    int main() {
        
        int opcao;
        float valorfinal, num1, num2, base, expoente, raizquadrada;
        
        printf("=================\n");
        printf("   CALCULADORA   \n");
        printf("=================\n");
        
        printf("Menu de Opcões\n");
        printf("1 - Soma\n");
        printf("2 - Subtracão\n");
        printf("3 - Multiplicacão\n");
        printf("4 - Divisão\n");
        printf("5 - Potência\n");
        printf("6 - Raíz Quadrada\n");
        printf("7 - Sair\n");
        
        printf("\nEscolha uma opcão: ");
        scanf("%d", &opcao);
        
        if(opcao == 7) {
            printf("\nPrograma encerrado.");
        } else {
            switch(opcao) {
                case 1: 
                    valorfinal = 0;
                    num1 = 0;
                    num2 = 0;
                    printf("Digite os números na ordem que será feita a operacão.\n");
                    printf("Digite o 1° número: ");
                    scanf("%f", &num1);
                    printf("Digite o 2° número: ");
                    scanf("%f", &num2);
                    valorfinal = num1 + num2;
                    printf("\nA soma dos números é: %.2lf", valorfinal);
                    break;
                case 2:
                    valorfinal = 0;
                    num1 = 0;
                    num2 = 0;
                    printf("Digite os números na ordem que será feita a operacão.\n");
                    printf("Digite o 1° número: ");
                    scanf("%f", &num1);
                    printf("Digite o 2° número: ");
                    scanf("%f", &num2);
                    valorfinal = num1 - num2;
                    printf("\nA subtracao dos números é: %.2lf", valorfinal);
                    break;
                case 3:
                    valorfinal = 0;
                    num1 = 0;
                    num2 = 0;
                    printf("Digite os números na ordem que será feita a operacão.\n");
                    printf("Digite o 1° número: ");
                    scanf("%f", &num1);
                    printf("Digite o 2° número: ");
                    scanf("%f", &num2);
                    valorfinal = num1 * num2;
                    printf("\nA multiplicacão dos números é: %.2lf", valorfinal);
                    break;
                case 4:
                    valorfinal = 0;
                    num1 = 0;
                    num2 = 0;
                    printf("Digite os números na ordem que será feita a operacão.\n");
                    printf("Digite o 1° número: ");
                    scanf("%f", &num1);
                    printf("Digite o 2° número: ");
                    scanf("%f", &num2);
                    valorfinal = num1 / num2;
                    printf("\nA divisão dos números é: %.2lf", valorfinal);
                    break;
                case 5:
                    valorfinal = 0;
                    base = 0;
                    expoente = 0;
                    printf("Digite os números na ordem que será feita a operacão.\n");
                    printf("Digite o número da base: ");
                    scanf("%f", &base);
                    printf("Digite o expoente: ");
                    scanf("%f", &expoente);
                    valorfinal = pow(base, expoente);
                    printf("\nA divisão dos números é: %.2lf", valorfinal);
                    break;
                case 6:
                    valorfinal = 0;
                    raizquadrada = 0;
                    printf("Digite a raíz: ");
                    scanf("%f", &raizquadrada);
                    if(raizquadrada >= 0) {
                        valorfinal = sqrt(raizquadrada);
                        printf("A raíz quadrada de %.2lf é: %.2lf", raizquadrada, valorfinal);
                    } else {
                        printf("Não é possível fazer raíz de um número negativo.\n");
                        printf("Aí se me quebra eu uai oJo\n");
                    }
                    break;
                default:
                    printf("\nOpcão inválida.");
            }
        }
        
        return 0;
    }
