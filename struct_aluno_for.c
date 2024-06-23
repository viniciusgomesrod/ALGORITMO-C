#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    struct fichaAluno { // Criando a struct fichaAluno
        char nome[1000];
        int matricula;
        float nota;
    };
    
    struct fichaAluno aluno[3]; // Criação da variável que será do tipo struct fichaAluno
    
    for(int i = 0; i < 3; i++) {
        printf("Nome do aluno %d: ", i + 1);
        fgets(aluno[i].nome, 1000, stdin);
        // Remover o '\n' lido pelo fgets
        size_t len = strlen(aluno[i].nome);
        if (len > 0 && aluno[i].nome[len - 1] == '\n') {
            aluno[i].nome[len - 1] = '\0';
        }
        printf("\nNúmero da matrícula de %s: ", aluno[i].nome);
        scanf("%d", &aluno[i].matricula);
        printf("\nNúmero da nota de %s: ", aluno[i].nome);
        scanf("%f", &aluno[i].nota);
        // Limpar o buffer do teclado após ler a nota
        getchar();
    }
    for(int i = 0; i < 3; i++) {
        printf("Nome do aluno: %s\n", aluno[i].nome);
        printf("Matrícula: %d\n", aluno[i].matricula);
        printf("Nota: %.2f\n", aluno[i].nota);
    }
    
    
    /*printf("Nome do aluno: ");
    fgets(aluno.nome, 1000, stdin);
    printf("\nNúmero da matrícula: ");
    scanf("%d", &aluno.matricula); // Para se referir à uma variável de um struct deve-se colocar a "(variavel do tipo struct).(variavel do struct)"
    printf("\nNúmero da nota: ");
    scanf("%f", &aluno.nota);
    printf("\nDados do aluno");
    printf("\nNome: %s\n", aluno.nome);
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nota 1: %.2f\n", aluno.n1);
    */


    return 0;
}
