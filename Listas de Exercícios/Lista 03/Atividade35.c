// Utilize a definição de tipos enumeráveis para representar as estações do ano e
// imprima os valores.

#include <stdio.h>

typedef enum {
    INVERNO = 1,
    PRIMAVERA,
    VERAO,
    OUTONO
} Estacao;

int main(void) {

    printf("Estacoes do ano: \n");

    printf("\nInverno:\t %d", INVERNO);
    printf("\nPrimavera:\t %d", PRIMAVERA);
    printf("\nVerao:\t\t %d", VERAO);
    printf("\nOutono:\t\t %d", OUTONO);

return 0;
}