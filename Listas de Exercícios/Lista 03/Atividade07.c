// Crie uma função que recebe uma estrutura de aluno (nome, matrícula, nota)
// como parâmetro e imprima seus valores.

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int matricula;
    float nota;
} Ficha;

void Print_ficha(Ficha aluno){
    printf("/////FICHA DO ALUNO/////");
    printf("\nNome: %s", aluno.nome);
    printf("\nMatricula: %d", aluno.matricula);
    printf("\nNota: %.1f\n", aluno.nota);
}

int main(void) {

    Ficha aluno;

    printf("Informe o nome do aluno: ");
    fgets(aluno.nome, 100, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Informe a matricula e a nota: ");
    scanf("%d%f", &aluno.matricula, &aluno.nota);

    Print_ficha(aluno);

return 0;
}