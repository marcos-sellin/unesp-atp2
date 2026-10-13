// Acesse os componentes de uma estrutura de aluno (nome, matrícula, nota)
// utilizando o operador “->” e imprima seus valores.

#include <stdio.h>

typedef struct {
    char nome[100];
    int matricula;
    float nota;
} Ficha;

int main(void) {

    Ficha aluno = {
        .nome = "Fulano de Ciclano", 
        .matricula = 123456, 
        .nota = 10.0
    };
    
    Ficha *aluno_p = &aluno;

    printf("/////FICHA DO ALUNO/////");
    printf("\nNome: %s", aluno_p->nome);
    printf("\nMatricula: %d", aluno_p->matricula);
    printf("\nNota: %.1f\n", aluno_p->nota);

return 0;
}