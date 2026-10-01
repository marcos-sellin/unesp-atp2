// Declare um array de 10 inteiros e inicialize-o com valores de 0 a
// 9. Escreva um programa em C que imprima todos os elementos do array.

#include <stdio.h>

int main(void) {

    int numeros[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Numeros de 0 a 9: ");

    for(int i = 0; i < 10; i++){
        printf("%d ", numeros[i]);
    }

return 0;
}