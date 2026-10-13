// Declare e inicialize uma estrutura aninhada para armazenar as informações de
// um ponto (x, y, z) e imprima seus valores.

#include <stdio.h>

typedef struct {
    int x;
    int y;
    int z;
} Plano;

typedef struct {
    char vetor[4];
    Plano coordenadas;
} Vetor;

int main(void) {

    Vetor ponto = {
        .coordenadas.x = 12,
        .coordenadas.y = 5,
        .coordenadas.z = 8,
        .vetor = "Nao"
    };

    printf("/////COORDENADAS DO PONTO/////");
    printf("\nX: %d", ponto.coordenadas.x);
    printf("\nY: %d", ponto.coordenadas.y);
    printf("\nZ: %d", ponto.coordenadas.z);

return 0;
}