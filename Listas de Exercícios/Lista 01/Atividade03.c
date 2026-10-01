// Declare um array de 7 inteiros e inicialize-o com os valores dos
// primeiros 7 n ́umeros primos. Escreva um programa em C que imprima todos os
// elementos do array.

#include <stdio.h>

int main(void) {

    int numeros[7] = {1, 2, 3, 5, 7, 11, 13};

    printf("Primeiros 7 primos: ");

    for(int i = 0; i < 7; i++){
        printf("%d ", numeros[i]);
    }

return 0;
}