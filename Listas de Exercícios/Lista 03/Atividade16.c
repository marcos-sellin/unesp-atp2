// Acesse os componentes de uma estrutura de filme (título, diretor, ano de lançamento)
// utilizando o operador ponto ‘.’ e imprima seus valores.

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

    printf("/////DADOS DO FILME/////");
    printf("\nTitulo: \t%s", filme.titulo);
    printf("\nDiretor: \t%s", filme.diretor);
    printf("\nAno: \t\t%d\n", filme.ano);

return 0;
}