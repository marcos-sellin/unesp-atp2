// Escreva um programa em C que receba um número inteiro
// como argumento na linha de comando e verifique se ele é par ou ímpar.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int num = atoi(argv[1]);

    if(num % 2 == 0){
        printf("O numero e par");
    }else{
        printf("O numero e impar");
    }

return 0;
}