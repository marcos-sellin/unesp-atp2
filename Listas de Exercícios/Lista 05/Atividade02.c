// Implemente uma função recursiva para calcular a soma dos primeiros N
// números naturais.

#include <stdio.h>

int Soma_rec(int n) {

    if(n == 0){
        return 0;
    }else{
        return (n - 1) + Soma_rec(n - 1);
    }

}

int main(void) {

    int n;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    printf("Soma dos primeiros %d naturais: %d\n", n, Soma_rec(n));

return 0;
}