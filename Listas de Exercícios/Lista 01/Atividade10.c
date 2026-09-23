// Escreva um programa em C que preencha um array de 10
// inteiros com números aleatórios entre 50 e 150. Calcule e imprima a média dos
// elementos do array.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int numeros[10], minimo = 50, maximo = 150;
    float media = 0;

    for(int i = 0; i < 10; i++){
        numeros[i] = rand() % (maximo - minimo - 1) + minimo;
        media += numeros[i];
    }

    printf("10 numeros aleatorios no intervalo [50, 150]\n");
    printf("Media dos numeros: %.1f", media / 10.0);

return 0;
}