// Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
// produto (nome, código, preçoo) e imprima o resultado.

#include <stdio.h>

typedef struct {
    char nome[25];
    int codigo;
    float preco;
} Compra;

int main(void) {

    Compra produto;

    printf("Tamanho da estrutura de dados: %d bytes\n", sizeof(produto));

return 0;
}