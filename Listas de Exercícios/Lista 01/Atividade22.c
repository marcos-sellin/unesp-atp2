// Escreva um programa em C que conte o número de elementos
// pares e ímpares em um array de 20 inteiros.

#include <stdio.h>

int main(void) {

    int numeros[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int pares = 0, impares = 0;

    for(int i = 0; i < 20; i++){
        if(numeros[i] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }

    printf("Quantidade de pares: %d \n", pares);
    printf("Quantidade de impares: %d \n", impares);

return 0;
}