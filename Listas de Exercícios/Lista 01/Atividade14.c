// Escreva um programa em C que declare um array de 5
// inteiros e um ponteiro para inteiro. Use o ponteiro para modificar os valores
// dos elementos do array. Imprima o array resultante.

#include <stdio.h>

int main(void) {

    int numeros[5] = {1, 2, 3, 4, 5};
    int *p = numeros;

    printf("Elementos do array modificados: ");

    for(int i = 0; i < 5; i++){
        printf("%d ", (*p + i) + 1);
    }

return 0;
}