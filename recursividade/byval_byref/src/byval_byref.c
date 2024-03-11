/*
 ============================================================================
 Name        : aula.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Funcao recursiva padrao de fatorial
int fatorialrecursivo(int n) {
	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * fatorialrecursivo (n - 1);
	}
}
// solucao iterativa de loop
int fatorialcomloop(int n){
	int resultado = 1;
	// Utilizando um loop for para multiplicar os numeros de 1 a n
	for (int i = 1; i <= n; i++) {
		resultado *= i;
	}
	return resultado;
}
int main(void) {
	int numero = 5;
	printf("O fatorial de %d e: %d\n", numero, fatorialrecursivo(numero));
	return 0;
}


