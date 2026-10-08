// Escreva um programa em C que declare um array de 5 inteiros
// e passe esse array para uma função que calcule a média dos elementos do array.

#include <stdio.h>

float Calc_media(int *nums){

    float media = 0;

    for(int i = 0; i < 5; i++){
        media += *(nums + i);
    }

return media /= 5.0;
}

int main(void) {

    int numeros[5] = {1, 2, 3, 4, 5};

    printf("Media dos numeros: %.1f", Calc_media(numeros));

return 0;
}