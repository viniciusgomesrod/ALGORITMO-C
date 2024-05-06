#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int rolardado() {
    return rand() % 6 + 1;
}

int calcularsoma(int dado1, int dado2) {
    return dado1 + dado2;
}

int main() {
    
    int jogador1[2], jogador2[2];
    int somajogador1, somajogador2;
    srand(time(NULL));
    
    jogador1[0] = rolardado();
    jogador1[1] = rolardado();
    printf("\nJogador 1: %d + %d", jogador1[0], jogador1[1]);
    somajogador1 = calcularsoma(jogador1[0], jogador1[1]);
    printf("\nSoma do jogador 1 é: %d", somajogador1);
    
    jogador2[0] = rolardado();
    jogador2[1] = rolardado();
    printf("\nJogador 2: %d + %d", jogador2[0], jogador2[1]);
    somajogador2 = calcularsoma(jogador2[0], jogador2[1]);
    printf("\nSoma do jogador 2 é: %d", somajogador2);

    if(somajogador1 > somajogador2) {
        printf("\nO vencedor é o jogador 1!");
    } else if(somajogador1 < somajogador2) {
        printf("\nO vencedor é o jogador 2!");
    } else {
        printf("\nEmpatou!");
    }
    
return 0;
}
