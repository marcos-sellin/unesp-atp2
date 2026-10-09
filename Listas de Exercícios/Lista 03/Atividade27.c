// Atribua os valores de uma estrutura de contato para outra e imprima os valores
// da nova estrutura.

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[25];
    int ddd;
    long long int numero;
} Dados;

int main(void) {

    Dados contato;

    printf("Informe o nome do contato: ");
    fgets(contato.nome, 25, stdin);
    contato.nome[strcspn(contato.nome, "\n")] = '\0';

    printf("Informe o DDD do numero de celular: ");
    scanf("%d", &contato.ddd);
    getchar();

    printf("Informe o numero de celular (apenas numeros): ");
    scanf("%lld", &contato.numero);

    Dados salvo = contato;

    printf("\n/////ENDERECO CADASTRADO/////");
    printf("\nNome:\t %s", contato.nome);
    printf("\nDDD:\t %d", contato.ddd);
    printf("\nNumero:  %lld", contato.numero);

return 0;
}