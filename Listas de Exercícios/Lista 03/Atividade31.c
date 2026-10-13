// Crie uma função que recebe uma estrutura de funcionário (nome, salário, de-
// partamento) como parâmetro e imprima seus valores.

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float salario;
    char departamento[25];
} Dados;

void Print_funcionario(Dados funcionario){

    printf("\n/////DADOS DO FUNCIONARIO/////");
    printf("\nNome:\t\t %s", funcionario.nome);
    printf("\nSalario:\t %.2f", funcionario.salario);
    printf("\nDepartamento:\t %s\n", funcionario.departamento);

};

int main(void) {

    Dados funcionario;

    printf("Informe o nome do funcionario: ");
    fgets(funcionario.nome, 50, stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';

    printf("Informe o salario: ");
    scanf("%f", &funcionario.salario);
    getchar();

    printf("Informe o departamento: ");
    fgets(funcionario.departamento, 25, stdin);
    funcionario.departamento[strcspn(funcionario.departamento, "\n")] = '\0';

    Print_funcionario(funcionario);

return 0;
}