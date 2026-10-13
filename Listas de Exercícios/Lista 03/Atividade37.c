// Declare e inicialize uma estrutura para armazenar as informações de um cliente
// (nome, idade, endereçoo) e imprima seus valores.

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char endereco[50];
} Dados;

int main(void) {

    Dados cliente = {"Luis Silveira", 37, "Rua Das Perdizes 186"};

    printf("/////DADOS DO CLIENTE/////");
    printf("\nNome:\t\t %s", cliente.nome);
    printf("\nIdade:\t\t %d", cliente.idade);
    printf("\nEndereco:\t %s\n", cliente.endereco);

return 0;
}