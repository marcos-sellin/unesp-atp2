// Escreva um programa em C que preencha um array de 15
// inteiros com números aleatórios entre 0 e 50. Em seguida,
// encontre e imprima o maior valor do array.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int numeros[15], minimo = 0, maximo = 50, maior_numero = 0;

    for(int i = 0; i < 15; i++){
        numeros[i] = rand() % (maximo - minimo - 1) + minimo;
        
        if(numeros[i] > maior_numero){
            maior_numero = numeros[i];
        }
    }

    printf("15 numeros aleatorios no intervalo [0, 50]\n");
    printf("Maior numero do array: %d", maior_numero);

return 0;
}