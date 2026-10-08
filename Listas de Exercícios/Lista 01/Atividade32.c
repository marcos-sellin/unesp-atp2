// Escreva um programa em C que use um array de ponteiros
// para armazenar 4 strings e encontre a string de maior comprimento.

#include <stdio.h>
#include <string.h>

int main(void) {

    char *palavras[] = {"abacate", "banana", "manga", "caqui"};
    int tamanho = 4, maior = strlen(palavras[0]), maior_i = 0;

    for(int i = 0; i < tamanho; i++){
        if(strlen(palavras[i]) > maior){
            maior = strlen(palavras[i]);
            maior_i = i;
        }
    }

    printf("String mais longa: %s", palavras[maior_i]);

return 0;
}