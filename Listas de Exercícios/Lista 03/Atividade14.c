// Utilize a declaração de tipos (typedef) para simplificar a definição de uma es-
// trutura para armazenar as informações de um cliente (nome, idade, endereço) e
// imprima seus valores.

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int idade;
    char endereco[100];
    int n_endereco;
} Dados;

int main(void) {

    Dados cliente;

    printf("Informe o nome do cliente: ");
    fgets(cliente.nome, 100, stdin);
    cliente.nome[strcspn(cliente.nome, "\n")] = '\0';

    printf("Informe a idade do cliente: ");
    scanf("%d", &cliente.idade);
    getchar();

    printf("Informe o endereco do cliente (sem numero): ");
    fgets(cliente.endereco, 100, stdin);
    cliente.endereco[strcspn(cliente.endereco, "\n")] = '\0';

    printf("Informe o numero da casa do cliente: ");
    scanf("%d", &cliente.n_endereco);

    printf("\n/////DADOS DO CLIENTE/////");
    printf("\nNome: \t\t%s", cliente.nome);
    printf("\nIdade: \t\t%d", cliente.idade);
    printf("\nEndereco: \t%s %d\n", cliente.endereco, cliente.n_endereco);

return 0;
}
