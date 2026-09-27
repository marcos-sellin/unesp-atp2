// Escreva um programa em C que declare um array de 12
// caracteres e use aritmética de ponteiros para inverter a ordem dos caracteres no
// array.

#include <stdio.h>

int main(void) {

    char letras[12] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};
    char invertida[12];
    int j = 0;

    for(int i = 11; i >= 0; i--){
        *(invertida + j) = *(letras + i);
        j++;
    }

    invertida[12] = '\0';

    printf("Array com ordem dos elementos invertida: %s", invertida);

return 0;
}