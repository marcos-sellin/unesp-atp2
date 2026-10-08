// Escreva um programa em C que use um array de ponteiros
// para armazenar 3 strings, ordene as strings em ordem alfabética e as imprima.

#include <stdio.h>
#include <string.h>

int main(void) {

    int tamanho = 3;
    char *palavras[] = {"morango", "kiwi", "abacate"};
    char *temp;

    for(int i = 0; i < tamanho - 1; i++){
        for(int j = i + 1; j < tamanho; j++){
            if(strcmp(palavras[i], palavras[j]) > 0){
                temp = palavras[j];
                palavras[j] = palavras[i];
                palavras[i] = temp;
            }
        }
    }

    printf("Strings em ordem alfabetica: %s", palavras[0]);

    for(int i = 1; i < tamanho; i++){
        printf(", %s", palavras[i]);
    }

return 0;
}