// Escreva um programa em C que use um array de ponteiros para
// armazenar e imprimir 5 strings.

#include <stdio.h>

int main(void) {

    char *palavras[] = {"abacate", "banana", "kiwi", "morango", "manga"};

    printf("Strings armazenadas: %s", palavras[0]);

    for(int i = 1; i < 5; i++){
        printf(", %s", palavras[i]);
    }

return 0;
}