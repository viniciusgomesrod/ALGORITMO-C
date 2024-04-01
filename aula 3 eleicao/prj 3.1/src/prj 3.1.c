/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	srand(time(NULL));
	int numsorteado = rand() %101;

	printf("Loteria");
	printf("\nEscolha um número entre 0 e 100: ");
	int numescolhido;
	scanf("%d", &numescolhido);

	if(numescolhido == numsorteado){
		printf("\nVocê ganhou!");
	} else{
		printf("\nVocê perdeu! O número sorteado foi: %d", numsorteado);
	}

	return EXIT_SUCCESS;
}
