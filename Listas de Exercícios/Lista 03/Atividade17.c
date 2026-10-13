// Acesse os componentes de uma estrutura de filme (título, diretor, ano de lançamento)
// utilizando o operador “->” e imprima seus valores.

#include <stdio.h>

typedef struct {
    char titulo[50];
    char diretor[50];
    int ano;
} Dados;

int main(void) {

    Dados filme = {
        .titulo = "Cavaleiros da Tabula Redonda",
        .diretor = "Carlos Alberto Roque",
        .ano = 1999
    };

    Dados *filme_p = &filme;

    printf("/////DADOS DO FILME/////");
    printf("\nTitulo: \t%s", filme_p->titulo);
    printf("\nDiretor: \t%s", filme_p->diretor);
    printf("\nAno: \t\t%d\n", filme_p->ano);

return 0;
}