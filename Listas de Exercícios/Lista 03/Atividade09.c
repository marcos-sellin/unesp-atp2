// Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
// pessoa (nome, idade, altura) e imprima o resultado.

#include <stdio.h>

typedef struct {
    char nome[100];
    int idade;
    float altura;
} Info;

int main(void) {

    Info pessoa;
    int tamanho = sizeof(pessoa);

    printf("Tamanho da estrutura: %d bytes", tamanho);

return 0;
}