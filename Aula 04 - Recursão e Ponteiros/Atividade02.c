// Escreva uma função recursiva que calcule o n-ésimo valor da
// sequência de Fibonacci.

#include <stdio.h>

int Fibo_n_rec(int n) {

    if(n <= 1){
        return 1;
    }else{
        return Fibo_n_rec(n - 1) + Fibo_n_rec(n - 2);
    }

}

int main(void) {

    int n, fibo;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    fibo = Fibo_n_rec(n);

    printf("n-esimo valor da sequencia de Fibonacci: %d", fibo);

return 0;
}