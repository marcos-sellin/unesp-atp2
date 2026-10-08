// Escreva um programa em C que declare um array de 10
// inteiros e passe esse array para uma função que encontre o maior elemento do
// array.

#include <stdio.h>

int Maior_valor(int *nums){

    int maior = *nums;

    for(int i = 1; i < 10; i++){
        if(*(nums + i) > maior){
            maior = *(nums + i);
        }
    }

return maior;
}

int main(void) {

    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Maior numero: %d", Maior_valor(numeros));

return 0;
}