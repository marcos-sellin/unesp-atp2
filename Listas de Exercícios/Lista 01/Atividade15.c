// Escreva um programa em C que declare um array de 7
// inteiros e use um ponteiro para calcular a soma dos elementos do array.

#include <stdio.h>

int main(void) {

    int numeros[7] = {1, 2, 3, 4, 5, 6, 7};
    int *p = numeros, soma = 0;

    for(int i = 0; i < 7; i++){
        soma += *(p + i);
    }

    printf("Soma dos elementos do array: %d", soma);

return 0;
}