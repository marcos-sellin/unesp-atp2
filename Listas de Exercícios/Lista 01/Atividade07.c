// Escreva um programa em C que leia 6 valores de ponto 
// flutuante e calcule a média dos valores.

#include <stdio.h>

int main(void) {

    float numeros[6], media = 0;

    for(int i = 0; i < 6; i++){
        printf("Digite um numero (%d/6): ", i + 1);
        scanf("%f", &numeros[i]);
        media += numeros[i];
    }

    printf("\nMedia de todos os elementos: %.1f", media / 6);

return 0;
}