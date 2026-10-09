// Utilize a definição de tipos enumeráveis para representar os dias da semana e
// imprima os valores.

#include <stdio.h>

typedef enum {
    DOMINGO = 1,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
} Semana;

int main(void) {

    Semana dia = DOMINGO;

    printf("Dias da semana: \n");
    printf("Domingo: %d\n", dia);
    printf("Segunda-Feira: %d\n", dia + 1);
    printf("Terca-Feira: %d\n", dia + 2);
    printf("Quarta-Feira: %d\n", dia + 3);
    printf("Quinta-Feira: %d\n", dia + 4);
    printf("Sexta-Feira: %d\n", dia + 5);
    printf("Sabado: %d\n", dia + 6);

return 0;
}