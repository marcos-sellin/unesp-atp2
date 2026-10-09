// Resolva um problema de cadastro de alunos utilizando estruturas.

#include <stdio.h>
#include <string.h>

#define QUANT_ALUNOS 2

typedef struct {
    char nome[100];
    int idade;
    char genero;
} Dados;

typedef struct {
    long long int cpf;
    int ra;
    Dados pessoal;
} Registro;

int main(void) {

    Registro aluno[QUANT_ALUNOS];

    printf("=====INICIO DA COLETA DE DADOS=====\n");

    printf("\nQuantidade de alunos: %d\n\n", QUANT_ALUNOS);

    for(int i = 0; i < QUANT_ALUNOS; i++){
        printf("/////ALUNO %d/////", i + 1);

        printf("\nNome: ");
        fgets(aluno[i].pessoal.nome, 100, stdin);
        aluno[i].pessoal.nome[strcspn(aluno[i].pessoal.nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &aluno[i].pessoal.idade);

        printf("Genero (M/F): ");
        scanf(" %c", &aluno[i].pessoal.genero);

        printf("CPF (somente os numero): ");
        scanf("%lld", &aluno[i].cpf);

        printf("RA (somente os numero): ");
        scanf("%d", &aluno[i].ra);
        getchar();

        printf("\n");
    }

    printf("=====FIM DA COLETA DE DADOS=====\n");

    for(int i = 0; i < QUANT_ALUNOS; i++){
        printf("\n/////REGISTRO DO ALUNO %d/////", i + 1);

        printf("\nNome: \t%s", aluno[i].pessoal.nome);
        printf("\nIdade: \t%d", aluno[i].pessoal.idade);
        printf("\nGenero: %c", aluno[i].pessoal.genero);
        printf("\nCPF: \t%lld", aluno[i].cpf);
        printf("\nRA: \t%d", aluno[i].ra);

        printf("\n");
    }

return 0;
}