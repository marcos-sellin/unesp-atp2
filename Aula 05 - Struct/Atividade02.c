// Escreva uma função que receba um triângulo e devolva a área.

#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Ponto;

typedef struct {
    Ponto a[3];
} Triangulo;

float Area_triangulo(Triangulo delta) {

    int x1 = delta.a[0].x,
        y1 = delta.a[0].y;

    int x2 = delta.a[1].x,
        y2 = delta.a[1].y;

    int x3 = delta.a[2].x,
        y3 = delta.a[2].y;

    float principal = (x1 * y2 * 1) + (y1 * 1 * x3) + (1 * x2 * y3),
          secundaria = (x3 * y2 * 1) + (y3 * 1 * x1) + (1 * x2 * y1),
          det = principal - secundaria,
          area = fabs(det) / 2;

    return area;

}

int main(void) {

    Triangulo delta;
    float area;

    printf("VERTICES DO TRIANGULO\n");

    for(int i = 0; i < 3; i++){
        printf("\n/////PONTO %d/////", i + 1);

        printf("\nDigite a coordenada X: ");
        scanf("%d", &delta.a[i].x);

        printf("Digite a coordenada Y: ");
        scanf("%d", &delta.a[i].y);
    }

    area = Area_triangulo(delta);

    printf("\nArea do triangulo: %.1f", area);

return 0;
}