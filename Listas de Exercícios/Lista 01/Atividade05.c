// Escreva um programa em C que leia 5 valores inteiros, armazene-
// os em um array e depois imprima os valores na ordem inversa.

#include <stdio.h>

int main(void) {

    int numeros[5];

    for(int i = 0; i < 5; i++){
        printf("Digite um numero inteiro (%d/5): ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nArray na ordem reversa: ");

    for(int i = 4; i >= 0; i--){
        printf("%d ", numeros[i]);
    }

return 0;
}