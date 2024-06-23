#include <stdio.h>
#include <stdlib.h>

int main() {
    
    struct fichaAluno { // Criando a struct fichaAluno
        char nome[1000];
        int matricula;
        float n1;
        float n2;
    };
    
    struct fichaAluno aluno; // Criação da variável que será do tipo struct fichaAluno
    
    printf("Nome do aluno: ");
    fgets(aluno.nome, 1000, stdin);
    printf("\nNúmero da matrícula: ");
    scanf("%d", &aluno.matricula); // Para se referir à uma variável de um struct deve-se colocar a "(variavel do tipo struct).(variavel do struct)"
    printf("\nNúmero da 1 nota: ");
    scanf("%f", &aluno.n1);
    printf("\nNúmero da 2 nota: ");
    scanf("%f", &aluno.n2);
    printf("\nDados do aluno");
    printf("\nNome: %s\n", aluno.nome);
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nota 1: %.2f\n", aluno.n1);
    printf("Nota 2: %.2f", aluno.n2);

    return 0;
}
