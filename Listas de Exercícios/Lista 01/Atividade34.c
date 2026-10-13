// Escreva um programa em C que receba uma string como
// argumento na linha de comando e conte o número de caracteres dessa string.

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int tam = strlen(argv[1]);

    printf("Tamanho da string: %d", tam);

return 0;
}