// Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
// funcionário (nome, salário, departamento) e imprima o resultado.

#include <stdio.h>

typedef struct {
    char nome[25];
    float salario;
    char departamento[25];
} Dados;

int main(void) {

    Dados funcionario;

    printf("Tamanho da estrutura de dados: %d bytes\n", sizeof(funcionario));

return 0;
}