// Escreva um programa em C que preencha um array de 12
// inteiros com n ́umeros aleat ́orios entre -20 e 20. Em seguida,
// conte e imprima quantos n ́umeros s ̃ao negativos.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int numeros[12], minimo = -20, maximo = 20, negativos = 0;

    for(int i = 0; i < 12; i++){
        numeros[i] = rand() % (maximo - minimo - 1) + minimo;

        if(numeros[i] < 0){
            negativos++;
        }
    }

    printf("12 numeros no intervalo [-20, 20]\n");
    printf("Quantidade de numeros negativos: %d", negativos);

return 0;
}