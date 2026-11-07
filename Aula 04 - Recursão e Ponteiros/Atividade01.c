// Escreva uma função que calcula o número de triângulos virados de
// ponta-a-cabeça (os triângulos com uma ponta em baixo e duas em
// cima) em uma grade de triângulos de altura n.

#include <stdio.h>

int Triangulo_virado_quant(int n, int sum) {

    if(n == 1){
        return 0;
    }else{
        return Triangulo_virado_quant(n - 1, sum + 1) + (sum + 1);
    }

}

int main(void) {

    int n, quant;

    printf("Digite a altura da grade de triangulos: ");
    scanf("%d", &n);

    quant = Triangulo_virado_quant(n, 0);

    printf("Quantidade de tirangulos de ponta-a-cabeca: %d", quant);

return 0;
}