// Declare e inicialize uma estrutura para armazenar as informações de um fun-
// cionário (nome, salário, departamento) e imprima seus valores.

#include <stdio.h>

typedef struct {
    char nome[100];
    float salario;
    char departamento[50];
} Dados;

int main(void) {

    Dados funcionario = {"Antonio Carlos", 2619.56, "cyberseguranca"};

    printf("/////DADOS DO FUNCIONARIO/////");
    printf("\nNome: \t\t%s", funcionario.nome);
    printf("\nSalario: \t%.2f", funcionario.salario);
    printf("\nDepartamento: \t%s\n", funcionario.departamento);

return 0;
}
