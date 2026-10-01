// Escreva um programa em C que leia 10 valores inteiros e
// calcule a soma de todos os elementos do array.

#include <stdio.h>

int main(void) {

    int numeros[10], soma = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero inteiro (%d/10): ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("\nSoma de todos os elementos: %d", soma);

return 0;
}