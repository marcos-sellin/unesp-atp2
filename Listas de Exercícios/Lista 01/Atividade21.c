// Escreva um programa em C que encontre o maior e o menor
// elemento em um array de 10 inteiros.

#include <stdio.h>

int main(void) {

    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maior = numeros[0], menor = numeros[0];

    for(int i = 0; i < 10; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }else if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    printf("Maior numero: %d \n", maior);
    printf("Menor numero: %d", menor);

return 0;
}