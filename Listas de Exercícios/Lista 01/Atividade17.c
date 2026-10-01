// Escreva um programa em C que declare um array de 5 inteiros
// e use aritmética de ponteiros para somar 10 a cada elemento do array. Imprima
// o array resultante.

#include <stdio.h>

int main(void) {

    int numeros[5] = {1, 2, 3, 4, 5};

    printf("Elementos do array modificados: ");

    for(int i = 0; i < 5; i++){
        *(numeros + i) += 10;
        printf("%d ", numeros[i]);
    }

return 0;
}