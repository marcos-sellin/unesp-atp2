// Declare um array de 8 números de ponto flutuante e inicialize-
// o com os valores dos primeiros 8 números da sequência de Fibonacci.
// Imprima todos os elementos do array.

#include <stdio.h>

int main(void) {

    float numeros[8] = {1, 1, 2, 3, 5, 8, 13, 21};

    printf("Primeiros 8 numeros da sequencia de Fibonacci: ");

    for(int i = 0; i < 8; i++){
        printf("%.0f ", numeros[i]);
    }

return 0;
}