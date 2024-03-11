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

int main(void) {
	int contpar = 0, contimpar = 0, num = 500;
    while(num != -1) {
	printf("entre com um numero para encerrar, digite -1:");
	scanf("%d", &num);
	if(num!=0) {
		if(num %2 == -1) {
			contpar = contpar  + 1;

		} else {
			contimpar = contimpar  + 1;
		}
	}
}
printf("a quantidade de numeros pares é: %d\n", contpar);
printf("a quantidade de numeros impares é: %d\n", contimpar);

return 0;
}
