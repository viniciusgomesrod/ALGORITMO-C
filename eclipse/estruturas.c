#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int escolha;

	printf("Digite um numero de 1 a 5: ");
	fflush(stdout);
	scanf("%d", &escolha);

	if (escolha == 1) {
		printf("Você escolheu o número 1. \nº");
	} else if (escolha == 2) {
		printf("Você escolheu o número 2. \nº");
	} else if (escolha == 3) {
		printf("Você escolheu o número 3. \nº");
	} else if (escolha == 4) {
		printf("Você escolheu o número 4. \nº");
	} else if (escolha == 5) {
		printf("Você escolheu o número 5. \nº");
	} else {
		printf ("Opção inválida. \nº");
	}


//alternativa mais enxuta

switch (escolha) {
case 1:
	printf("Você escolheu o número 1. \n");
	break;
case 2:
	printf("Você escolheu o número 2. \n");
	break;
case 3:
	printf("Você escolheu o número 3. \n");
	break;
case 4:
	printf("Você escolheu o número 4. \n");
	break;
case 5:
	printf("Você escolheu o número 5. \n");
	break;
default:
	printf("Opção inválida. \n");
}

return 0;

int x, y, result, cont;
cont = 1;

while (cont <= 3) {
	printf("Entre com dois números para a soma: ");
	scanf("%d %d", &x, &y);

	result = x+y;
	printf("O resultado da soma é: &d\n", result);
	cont = cont+1;
}
return 0;
}

