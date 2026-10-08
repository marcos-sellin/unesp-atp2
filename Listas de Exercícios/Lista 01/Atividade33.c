// Escreva um programa em C que receba 3 números inteiros como
// argumentos na linha de comando e imprima a soma deles.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int soma = 0;

    for(int i = 1; i < argc; i++){
        soma += atoi(argv[i]);
    }

    printf("Soma dos inteiros: %d", soma);

return 0;
}