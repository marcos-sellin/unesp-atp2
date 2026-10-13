// Crie uma função recursiva para calcular o coeficiente binomial C(n, k).

#include <stdio.h>

int Coef_bin_rec(int n, int k) {

    if(k < 0 || k > n){
        return 0;
    }

    if(k == 0 || k == n){
        return 1;
    }

    return Coef_bin_rec(n - 1, k - 1) + Coef_bin_rec(n - 1, k);
}

int main(void) {
    
    int n, k;

    printf("Digite os valores de n e k: ");
    scanf("%d%d", &n, &k);

    printf("C(%d, %d) = %d\n", n, k, Coef_bin_rec(n, k));

    return 0;
}