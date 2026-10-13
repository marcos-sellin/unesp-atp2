// Acesse os componentes de uma estrutura de ponto (x, y, z) utilizando o operador
// ponto ‘.’ e imprima seus valores.

#include <stdio.h>

typedef struct {
    int x;
    int y;
    int z;
} Coordenadas;

int main(void) {

    Coordenadas ponto = {
        .x = 12,
        .y = 5,
        .z = 8,
    };

    printf("/////COORDENADAS DO PONTO/////");
    printf("\nX: %d", ponto.x);
    printf("\nY: %d", ponto.y);
    printf("\nZ: %d", ponto.z);

return 0;
}