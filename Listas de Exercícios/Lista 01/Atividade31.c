// Escreva um programa em C que use um array de ponteiros
// para armazenar 5 números inteiros e encontre o maior valor entre eles.

#include <stdio.h>

int main(void) {

    int *maior, tamanho = 5;
    int numeros[] = {1, 2, 3, 4, 5};

    int *numeros_pont[] = {&numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4]};

    maior = numeros_pont[0];
    
    for(int i = 0; i < tamanho; i++){
        if(*numeros_pont[i] > *maior){
            maior = numeros_pont[i];
        }
    }

    printf("Maior numero do array: %d", *maior);

return 0;
}