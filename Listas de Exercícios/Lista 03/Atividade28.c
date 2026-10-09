// Acesse os componentes de uma estrutura de cliente (nome, idade, endereço)
// utilizando o operador ponto ‘.’ e imprima seus valores.

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char endereco[50];
} Dados;

int main(void) {

    Dados cliente = {
        .nome = "Jaime Pinheiro",
        .idade = 28,
        .endereco = "Rua Sao Salvador 145",
    };

    printf("/////DADOS DO CLIENTE/////");
    printf("\nNome:\t  %s", cliente.nome);
    printf("\nIdade:\t  %d", cliente.idade);
    printf("\nEndereco: %s\n", cliente.endereco);

return 0;
}