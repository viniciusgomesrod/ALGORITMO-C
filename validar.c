#include <stdio.h>
#include <stdlib.h>

void validarSituacao(int idade, int altura, int sexo) {
	if (altura >= 180 && idade > 16) {
		if (sexo == 1) {
			printf("Apta a jogar no time de basquete feminino. \n");
		} else if (sexo == 2) {
			printf("Apto a jogar no time de basquete masculino. \n");
		} else {
			printf("Não está apto. \n");
		}
	} else {
	    printf("Não está apto. \n");
	}
}

	int main(void) {
		int idade, altura, sexo;

		// solicitar dados do usuário
		printf("Digite a idade do candidato: ");
		scanf("%d", &idade);
		
		printf("Digite a altura em centímetros do candidato: ");
		scanf("%d", &altura);
		
		printf("Digite o sexo do candidato. Para feminino digite 1 e masculino digite 2: ");
		scanf("%d", &sexo);

		// chamar a funcao pra validar e dar o resultado
		validarSituacao(idade, altura, sexo);

		return 0;
	    
	}
