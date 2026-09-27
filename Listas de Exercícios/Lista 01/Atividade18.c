// Escreva um programa em C que declare um array de 10
// inteiros e use aritmética de ponteiros para calcular a soma de todos os elementos
// do array. Imprima a soma.

#include <stdio.h>

int main(void) {

    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0;

    for(int i = 0; i < 10; i++){
        soma += *(numeros + i);
    }

    printf("Soma dos elementos do array: %d", soma);

return 0;
}