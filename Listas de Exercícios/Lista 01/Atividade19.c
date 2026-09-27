// Escreva um programa em C que declare um array de 8
// numeros de ponto flutuante e use aritmética de ponteiros para calcular a media
// dos valores.

#include <stdio.h>

int main(void) {

    float numeros[8] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0};
    float media = 0;

    for(int i = 0; i < 8; i++){
        media += *(numeros + i);
    }

    printf("Media dos elementos do array: %.1f", media / 8);

return 0;
}