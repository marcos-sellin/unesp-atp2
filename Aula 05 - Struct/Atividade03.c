// Escreva uma função que desloque um triângulo à direita de uma
// distância d.

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Triangulo;

void Desloca_triangulo(Triangulo pontos[], int d) {

    printf("\nVERTICES DO TRIANGULO DESLOCADO");

    for(int i = 0; i < 3; i++){
        printf("\nA%d(%d, %d)", i + 1, pontos[i].x + d, pontos[i].y);
    }

}

int main(void) {

    Triangulo pontos[3];
    int d;

    printf("VERTICES DO TRIANGULO\n");

    for(int i = 0; i < 3; i++){
        printf("\n/////PONTO %d/////", i + 1);

        printf("\nDigite a coordenada X: ");
        scanf("%d", &pontos[i].x);

        printf("Digite a coordenada Y: ");
        scanf("%d", &pontos[i].y);
    }

    printf("\nFIM DA COLETA DOS PONTOS\n");
    printf("\nDigite uma distancia 'd': ");
    scanf("%d", &d);

    Desloca_triangulo(pontos, d);

return 0;
}