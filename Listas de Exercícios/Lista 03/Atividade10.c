// Declare e inicialize uma união para armazenar um valor inteiro ou um valor
// flutuante e imprima seus valores.

#include <stdio.h>

typedef union {
    int inteiro;
    float flutuante;
} Uniao;

int main(void) {

    Uniao numeros;
    numeros.flutuante = 5.5;

    printf("Valor armazenado: %.1f", numeros.flutuante);

return 0;
}