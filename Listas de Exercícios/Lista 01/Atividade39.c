// Escreva um programa em C que declare um array de 6
// inteiros e passe esse array para uma funçãoo que conte quantos elementos são
// positivos.

#include <stdio.h>

int Quant_positivos(int *nums) {

    int quant = 0;

    for(int i = 0; i < 6; i++){
        if(*(nums + i) > 0){
            quant++;
        }
    }

return quant;
}

int main(void) {

    int numeros[6] = {1, -1, 2, -2, 3, -3};

    printf("Quantidade de numeros positivos: %d", Quant_positivos(numeros));

return 0;
}