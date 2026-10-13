// Desenvolva uma função recursiva para imprimir todos os números primos
// ate N.

#include <stdio.h>

int Primo_rec(int n, int div) {

    if(div == 1){
        return 1;
    }

    if(n % div == 0){
        return 0;
    }

    return Primo_rec(n, div - 1);

}

void Print_primo_rec(int end, int num) {

    if(num <= end){
        if(Primo_rec(num, num - 1) == 1){
            printf("%d ", num);
        }

        Print_primo_rec(end, num + 1);
    }

}

int main(void) {

    int n;

    printf("Digite o numero limite: ");
    scanf("%d", &n);

    printf("Numeros primos ate N: ");

    Print_primo_rec(n, 2);

return 0;
}