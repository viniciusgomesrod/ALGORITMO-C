#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int alunos = 5;
    char nome[alunos][100];
    int idade [alunos];
    int somaidades = 0;
    float mediaidades;
    int i = 0;
    
    for (i = 0; i < 5; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%s", &nome[i]);
        printf("\nDigite a idade de %s: ", nome[i]);
        scanf("%d", &idade[i]);
        
        somaidades += idade[i];
    }
    
    mediaidades = (float)somaidades / 5;
    
    printf("\nA média das idades é de %.2f anos", mediaidades);
    return 0;
}
