// Acesse os componentes de uma estrutura de aluno (nome, matrícula, nota)
// utilizando o operador ponto ‘.’ e imprima seus valores.

#include <stdio.h>

typedef struct {
    char nome[100];
    int matricula;
    float nota;
} Ficha;

int main(void) {

    Ficha aluno = {
        .nome = "Funalo de Ciclano", 
        .matricula = 123456, 
        .nota = 10.0
    };

    printf("/////FICHA DO ALUNO/////");
    printf("\nNome: %s", aluno.nome);
    printf("\nMatricula: %d", aluno.matricula);
    printf("\nNota: %.1f\n", aluno.nota);

return 0;
}