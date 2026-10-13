// Desenvolva uma função recursiva para calcular a sequência de Fibonacci
// até o enésimo termo.

#include <stdio.h>

int Fibo_n_rec(int num) {

    if(num == 0 || num == 1){
        return 1;
    }else{
        return Fibo_n_rec(num - 1) + Fibo_n_rec(num -  2);
    }

}

int main(void) {

    int num;

    printf("Informe quantos termos da sequencia serao mostrados: ");
    scanf("%d", &num);

    printf("Sequencia de Fibonacci: ");

    for(int i = 0; i < num; i++){
        printf("%d ", Fibo_n_rec(i));
    }

return 0;
}