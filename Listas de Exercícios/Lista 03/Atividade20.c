// Declare um arranjo de estruturas para armazenar as informações de 3 livros
// (título, autor, ano de publicação) e imprima seus valores.

#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[25];
    char autor[50];
    int ano;
} Info;

int main(void) {

    Info livros[3];

    printf("/////COLETA DE DADOS/////\n");

    for(int i = 0; i < 3; i++){
        printf("Informe o titulo do livro: ");
        fgets(livros[i].titulo, 25, stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';

        printf("Informe o nome do autor: ");
        fgets(livros[i].autor, 50, stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';

        printf("Informe o ano de publicacao: ");
        scanf("%d", &livros[i].ano);
        getchar();

        printf("\n");
    }

    printf("=====FIM DA COLETA DE DADOS=====\n");

    for(int i = 0; i < 3; i++){
        printf("\n/////DADOS DO LIVRO %d/////", i + 1);
        printf("\nTitulo: %s", livros[i].titulo);
        printf("\nAutor: \t%s", livros[i].autor);
        printf("\nAno: \t%d\n", livros[i].ano);
    }

return 0;
}