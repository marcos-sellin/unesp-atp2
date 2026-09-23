// Escreva um programa em C que preencha um array de 20 inteiros
// com números aleatórios entre 1 e 100. Em seguida, imprima todos
// os elementos do array.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int minimo = 1, maximo = 100;
    int numeros[20];

    printf("20 numeros aleatorios no intervalo [1, 100]\n");
    printf("Array contendo os numeros: ");

    for(int i = 0; i < 20; i++){
        numeros[i] = rand() % (maximo - minimo - 1) + minimo;
        printf("%d ", numeros[i]);
    }

return 0;
}