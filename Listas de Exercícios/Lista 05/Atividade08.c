// Desenvolva uma função recursiva para calcular o MDC (Máximo Divisor
// Comum) de dois números.

#include <stdio.h>

int Mdc_rec(int div1, int div2) {

    if(div1 % div2 == 0){
        return div2;
    }else{
        return Mdc_rec(div2, div1 % div2);
    }

}

int main(void) {

    int div1, div2;

    printf("Digite dois numeros: ");
    scanf("%d%d", &div1, &div2);

    printf("MDC dos numeros: %d\n", Mdc_rec(div1, div2));

return 0;
}