// Resolva um problema de cadastro de livros utilizando estruturas.

#include <stdio.h>
#include <string.h>

#define LIVROS 4

typedef struct {
    char nome[50];
    char autor[50];
    char genero[20];
} Dados;

typedef struct {
    int corredor;
    int prateleira;
    Dados livro;
} Registro;

int main(void) {

    Registro local[LIVROS];

    printf("=====INICIO DA COLETA DE DADOS=====\n");

    printf("\nQuantidade de livros: %d\n\n", LIVROS);

    for(int i = 0; i < LIVROS; i++){
        printf("/////LIVRO %d/////", i + 1);

        printf("\nNome: ");
        fgets(local[i].livro.nome, 50, stdin);
        local[i].livro.nome[strcspn(local[i].livro.nome, "\n")] = '\0';

        printf("Autor: ");
        fgets(local[i].livro.autor, 50, stdin);
        local[i].livro.autor[strcspn(local[i].livro.autor, "\n")] = '\0';

        printf("Genero: ");
        fgets(local[i].livro.genero, 20, stdin);
        local[i].livro.genero[strcspn(local[i].livro.genero, "\n")] = '\0';

        printf("Corredor: ");
        scanf("%d", &local[i].corredor);

        printf("Prateleira: ");
        scanf("%d", &local[i].prateleira);
        getchar();

        printf("\n");
    }

    printf("=====FIM DA COLETA DE DADOS=====\n");

    for(int i = 0; i < LIVROS; i++){
        printf("\n/////REGISTRO DO LIVRO %d/////", i + 1);

        printf("\nNome:\t\t %s", local[i].livro.nome);
        printf("\nAutor:\t\t %s", local[i].livro.autor);
        printf("\nGenero:\t\t %s", local[i].livro.genero);
        printf("\nCorredor:\t %d", local[i].corredor);
        printf("\nPrateleira:\t %d", local[i].prateleira);

        printf("\n");
    }

return 0;
}