// Escreva uma função que retorne o tipo de um triângulo (escaleno,
// isósceles ou equilátero). Use uma enumeração para representar o tipo.

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Ponto;

typedef struct {
    Ponto a[3];
} Triangulo;

typedef enum {
    ESCALENO = 1,
    ISOSCELES,
    EQUILATERO
} Lados_iguais;

int Dist_sqr(int *p1, int *p2) {

    int difx = p2[0] - p1[0],
        dify = p2[1] - p1[1];

    return difx * difx + dify * dify;

}

int Tipo_triangulo(Triangulo delta) {

    int a[2] = {delta.a[0].x, delta.a[0].y},
        b[2] = {delta.a[1].x, delta.a[1].y},
        c[2] = {delta.a[2].x, delta.a[2].y};

    int l1 = Dist_sqr(a, b),
        l2 = Dist_sqr(b, c),
        l3 = Dist_sqr(c, a);

    if(l1 == l2 && l2 == l3){
        return EQUILATERO;
    }else if(l1 == l2 || l2 == l3 || l3 == l1){
        return ISOSCELES;
    }

    return ESCALENO;

}

int main(void) {

    Triangulo delta;
    int classe;

    printf("VERTICES DO TRIANGULO\n");

    for(int i = 0; i < 3; i++){
        printf("\n/////PONTO %d/////", i + 1);

        printf("\nDigite a coordenada X: ");
        scanf("%d", &delta.a[i].x);

        printf("Digite a coordenada Y: ");
        scanf("%d", &delta.a[i].y);
    }

    printf("\nFIM DA COLETA DE DADOS\n");

    classe = Tipo_triangulo(delta);

    if(classe == EQUILATERO){
        printf("O triangulo e equilatero\n");
    }else if(classe == ISOSCELES){
        printf("O triangulo e isosceles\n");
    }else{
        printf("O triangulo e escaleno\n");
    }

return 0;
}