// Resolva um problema de cadastro de funcionários utilizando estruturas.

#include <stdio.h>
#include <string.h>

#define FUNCIONARIOS 3

typedef struct {
    char nome[100];
    int idade;
    char genero;
} Dados;

typedef struct {
    char setor[25];
    float salario;
    Dados pessoal;
} Registro;

int main(void) {

    Registro funcionario[FUNCIONARIOS];

    printf("=====INICIO DA COLETA DE DADOS=====\n");

    printf("\nQuantidade de funcionarios: %d\n\n", FUNCIONARIOS);

    for(int i = 0; i < FUNCIONARIOS; i++){
        printf("/////FUNCIONARIO %d/////", i + 1);

        printf("\nNome: ");
        fgets(funcionario[i].pessoal.nome, 100, stdin);
        funcionario[i].pessoal.nome[strcspn(funcionario[i].pessoal.nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &funcionario[i].pessoal.idade);

        printf("Genero (M/F): ");
        scanf(" %c", &funcionario[i].pessoal.genero);
        getchar();

        printf("Setor: ");
        fgets(funcionario[i].setor, 25, stdin);
        funcionario[i].setor[strcspn(funcionario[i].setor, "\n")] = '\0';

        printf("Salario: ");
        scanf("%f", &funcionario[i].salario);
        getchar();

        printf("\n");
    }

    printf("=====FIM DA COLETA DE DADOS=====\n");

    for(int i = 0; i < FUNCIONARIOS; i++){
        printf("\n/////REGISTRO DO FUNCIONARIO %d/////", i + 1);

        printf("\nNome: \t\t%s", funcionario[i].pessoal.nome);
        printf("\nIdade: \t\t%d", funcionario[i].pessoal.idade);
        printf("\nGenero: \t%c", funcionario[i].pessoal.genero);
        printf("\nSetor: \t\t%s", funcionario[i].setor);
        printf("\nSalario: \t%.2f", funcionario[i].salario);

        printf("\n");
    }

return 0;
}