#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    
    printf("Escolha uma porta de 1 a 3: ");
    int portaescolhida;
    scanf("%d", &portaescolhida);
    
    if(portaescolhida < 1 || portaescolhida > 3) {
        printf("\nEscolha inválida.");
    } else {
        
        srand(time(NULL)); // desde a época
        int portapremiada = rand() % 3 + 1; // 0, 1, 2 + 1
        int portavazia = -1;
        
        do {
            portavazia = rand() % 3 + 1;
        } while (portavazia == portapremiada || portavazia == portaescolhida);
        
        printf("\nA porta vazia é: %d\n", portavazia);
        printf("\nVocê quer trocar de porta? ");
        char opcao;
        scanf("%c", &opcao);
        int trocarporta = (opcao == 's' || 'S');
        int portaescolhidaoriginal = portaescolhida;
        
        if(trocarporta) {
            do {
                portaescolhida = rand() % 3 + 1;
            } while(portaescolhida == portavazia || portaescolhida == portaescolhidaoriginal);
            printf("Você trocou para a porta %d", portaescolhida);
        }
        
        if(portaescolhida == portapremiada) {
            printf("\nVocê ganhou!");
        } else {
            printf("\nVocê perdeu! A porta premiada era a %d", portapremiada);
        }
        
        printf("\nPorta premiada: %d", portapremiada);
        printf("\nPorta vazia: %d", portavazia);
        printf("\nPorta escolhida: %d", portaescolhida);
        printf("\nPorta escolhida original: %d", portaescolhidaoriginal);
    }
return 0;
}
