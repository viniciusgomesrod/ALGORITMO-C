#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float Peso;
    int Idade;
    float Altura;
} Pessoa;

Pessoa SetPessoa(int idade, float peso, float altura) {
    Pessoa P;
    P.Idade = idade;
    P.Peso = peso;
    P.Altura = altura;
    return P;
}

void ImprimePessoa(Pessoa P) {
    printf("Idade: %d anos,  Peso: %.2f kgs, Altura: %.2f\n metro.", P.Idade, P.Peso, P.Altura);
}

int main(void) {
    Pessoa PessoaDigitada;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &PessoaDigitada.Idade);

    printf("Digite o peso da pessoa: ");
    scanf("%f", &PessoaDigitada.Peso);

    printf("Digite a altura da pessoa: ");
    scanf("%f", &PessoaDigitada.Altura);

    ImprimePessoa(PessoaDigitada);

    return 0;
}
