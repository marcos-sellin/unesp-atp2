// Escreva um programa em C que receba 5 números inteiros
// como argumentos na linha de comando e imprima o maior deles.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int num = atoi(argv[1]);
    int maior = num;

    for(int i = 2; i < argc; i++){
        num = atoi(argv[i]);

        if(num > maior){
            maior = num;
        }
    }

    printf("Maior numero: %d", maior);

return 0;
}