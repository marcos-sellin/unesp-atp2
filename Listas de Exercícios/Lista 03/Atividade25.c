// Declare e inicialize uma estrutura para armazenar as informações de um aluno
// (nome, matrícula, nota) e imprima seus valores.

#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Ficha;

int main(void) {

    Ficha aluno = {"Paulo Jose", 123456, 7.8};

    printf("/////DADOS DO ALUNO/////");
    printf("\nNome:\t\t %s", aluno.nome);
    printf("\nMatricula:\t %d", aluno.matricula);
    printf("\nNota:\t %.1f\n", aluno.nota);

return 0;
}
