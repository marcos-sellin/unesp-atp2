// Utilize a declaração de tipos (typedef) para simplificar a definição de uma estru-
// tura para armazenar as informações de um professor (nome, disciplina, salário)
// e imprima seus valores.

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char disciplina[25];
    float salario;
} Dados;

int main(void) {

    Dados professor;

    printf("Informe o nome do professor: ");
    fgets(professor.nome, 50, stdin);
    professor.nome[strcspn(professor.nome, "\n")] = '\0';

    printf("Informe a disciplina lecionada: ");
    fgets(professor.disciplina, 25, stdin);
    professor.disciplina[strcspn(professor.disciplina, "\n")] = '\0';

    printf("Informe o salario: ");
    scanf("%f", &professor.salario);

    printf("\n/////DADOS DO PROFESSOR/////");
    printf("\nNome:\t\t %s", professor.nome);
    printf("\nDisciplina:\t\t %s", professor.disciplina);
    printf("\nSalario:\t %.2f\n", professor.salario);

return 0;
}
