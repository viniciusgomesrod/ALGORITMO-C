#include <stdio.h>
#include <stdlib.h>

int main() {
    float alturas[5];
	float maior;
	float menor;

	printf("Digite a altura do aluno 1: ");
	scanf("%f", &alturas[0]);

	maior = alturas[0];
	menor = alturas[0];

	for (int i = 1; i < 5; i++) {
		printf("Digite a altura do aluno %d: ", i + 1);
		scanf("%f", &alturas[i]);

		if (alturas[i] > maior) {
			maior = alturas[i];
		}
		if (alturas[i] < menor) {
			menor = alturas[i];
		}
	}

	printf("Maior altura: %.2f\n", maior);
	printf("Menor altura: %.2f\n", menor);
	return 0;
}
