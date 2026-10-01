// Escreva uma função que troca os valores de duas variáveis inteiras.

#include <stdio.h>

void Troca_numero(int *n1, int *n2) {

    int aux;
    aux = *n2;
    *n2 = *n1;
    *n1 = aux;

}

int main(void) {

    int n1, n2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    Troca_numero(&n1, &n2);

    printf("Numeros trocados: ");
    printf("\nN1: %d", n1);
    printf("\nN2: %d", n2);

return 0;
}