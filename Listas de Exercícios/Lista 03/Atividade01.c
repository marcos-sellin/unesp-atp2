// Declare e inicialize uma estrutura para armazenar as informações de um livro
// (título, autor, ano de publicação) e imprima seus valores.

#include <stdio.h>
#include <string.h>

struct livro {
    char titulo[100];
    char autor[100];
    int ano_publi;
};

int main(void) {

    struct livro liv;

    printf("Informe o titulo do livro: ");
    fgets(liv.titulo, 100, stdin);
    liv.titulo[strlen(liv.titulo) - 1] = '\0';

    printf("Informe o autor do livro: ");
    fgets(liv.autor, 100, stdin);
    liv.autor[strlen(liv.autor) - 1] = '\0';

    printf("Informe o ano de publicacao: ");
    scanf("%d", &liv.ano_publi);

    printf("\n/////DADOS DO LIVRO/////");
    printf("\nTitulo: %s", liv.titulo);
    printf("\nAutor: %s", liv.autor);
    printf("\nAno de Publicacao: %d\n", liv.ano_publi);

return 0;
}