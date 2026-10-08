// Escreva um programa em C que declare um array de 8
// inteiros e passe esse array para uma função que inverta a ordem dos elementos
// do array.

#include <stdio.h>

void Inverte_array(int *nums, int tam) {

    int aux, j = tam - 1;

    for(int i = 0; i < tam / 2; i++){
        aux = *(nums + i);
        *(nums + i) = *(nums + j);
        *(nums + j) = aux;
        j--;
    }

}

int main(void) {

    int numeros[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int tamanho = 8;

    Inverte_array(numeros, tamanho);

    printf("Array invertido: %d", numeros[0]);

    for(int i = 1; i < 8; i++){
        printf(", %d", numeros[i]);
    }

return 0;
}