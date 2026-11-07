// Escreva uma estrutura para representar um triângulo que contém os
// pontos correspondentes aos três vértices.

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Triangulo;

int main(void) {

    Triangulo pontos[3];

    printf("VERTICES DO TRIANGULO\n");

    for(int i = 0; i < 3; i++){
        printf("\n/////PONTO %d/////", i + 1);

        printf("\nDigite a coordenada X: ");
        scanf("%d", &pontos[i].x);

        printf("Digite a coordenada Y: ");
        scanf("%d", &pontos[i].y);
    }

    printf("\nVERTICES DO TRIANGULO");

    for(int i = 0; i < 3; i++){
        printf("\nA%d(%d, %d)", i + 1, pontos[i].x, pontos[i].y);
    }

return 0;
}