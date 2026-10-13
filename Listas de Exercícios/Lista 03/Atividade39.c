// Atribua os valores de uma estrutura de produto para outra e imprima os valores
// da nova estrutura.

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    long long int telefone;
    char email[25];
} Dados;

int main(void) {

    Dados contato;

    printf("Informe o nome do contato: ");
    fgets(contato.nome, 50, stdin);
    contato.nome[strcspn(contato.nome, "\n")] = '\0';

    printf("Informe o numero de telefone do contato: ");
    scanf("%lld", &contato.telefone);
    getchar();

    printf("Informe o email do contato: ");
    fgets(contato.email, 25, stdin);
    contato.email[strcspn(contato.email, "\n")] = '\0';

    Dados salvo = contato;

    printf("\n/////DADOS DO CONTATO/////");
    printf("\nNome:\t\t %s", salvo.nome);
    printf("\nTelefone:\t %lld", salvo.telefone);
    printf("\nEmail:\t\t %s\n", salvo.email);

return 0;
}