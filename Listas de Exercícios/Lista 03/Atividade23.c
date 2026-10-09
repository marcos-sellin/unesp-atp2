// Utilize a definição de tipos enumeráveis para representar os meses do ano e
// imprima os valores.

#include <stdio.h>

typedef enum {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} Ano;

int main(void) {

    printf("Meses do ano: \n");

    printf("\nJaneiro: \t%d", JANEIRO);
    printf("\nFevereiro: \t%d", FEVEREIRO);
    printf("\nMarco: \t\t%d", MARCO);
    printf("\nAbril: \t\t%d", ABRIL);
    printf("\nMaio: \t\t%d", MAIO);
    printf("\nJunho: \t\t%d", JUNHO);
    printf("\nJulho: \t\t%d", JULHO);
    printf("\nAgosto: \t%d", AGOSTO);
    printf("\nSetembro: \t%d", SETEMBRO);
    printf("\nOutubro: \t%d", OUTUBRO);
    printf("\nNovembro: \t%d", NOVEMBRO);
    printf("\nDezembro: \t%d", DEZEMBRO);

return 0;
}