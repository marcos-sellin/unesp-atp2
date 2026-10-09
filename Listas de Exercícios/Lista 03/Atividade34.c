// Declare e inicialize uma união para armazenar um valor double ou um valor
// char e imprima seus valores.

#include <stdio.h>

typedef union {
    int inteiro;
    float flutuante;
} Numero;

int main(void) {

    Numero guardar;

    printf("Digite um numero: ");
    scanf("%f", &guardar.flutuante);

    printf("Numero armazenado: %.1f\n", guardar.flutuante);

return 0;
}