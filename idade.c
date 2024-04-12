#include <stdlib.h>
#include <stdio.h>

int calcidadeatual(int anonasc, int anoatual) {
    return anoatual - anonasc;
}

int calcidadefutura(int anofuturo, int anonasc) {
    return anofuturo - anonasc;
}

int main() {
    int anoatual, anonasc, idadeatual, anofuturo, idadefutura, opcao;
    
    printf("Em que ano você nasceu? ");
    scanf("%d", &anonasc);
    printf("Digite o ano atual: ");
    scanf("%d", &anoatual);
    
    idadeatual = calcidadeatual(anonasc, anoatual);
    
    printf("Sua idade atual é: %d\n", idadeatual);
    
    printf("Quer saber sua idade futura? Se sim, digite 1.\n");
    scanf("%d", &opcao);
    if(opcao == 1) {
        printf("Digite o ano futuro: ");
        scanf("%d", &anofuturo);
        
        idadefutura = calcidadefutura(anofuturo, anonasc);
        
        printf("Sua idade no ano de %d será de %d anos.", anofuturo, idadefutura);
    } 
        
    return 0;
}
