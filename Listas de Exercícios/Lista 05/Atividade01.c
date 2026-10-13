// Escreva uma função recursiva para calcular o fatorial de um número.

#include <stdio.h>

int Fatorial_rec(int n) {

    if(n == 0){
        return 1;
    }else{
        return n * Fatorial_rec(n - 1);
    }

}

int main(void) {

    int n;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    printf("Fatorial do numero: %d\n", Fatorial_rec(n));

return 0;
}