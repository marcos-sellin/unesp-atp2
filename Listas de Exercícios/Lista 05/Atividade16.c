// Desenvolva uma função recursiva para calcular a sequência de Ackermann.

#include <stdio.h>

int Ack_rec(int num1, int num2) {

    if(num1 == 0){
        return num2 + 1;
    }

    if(num2 == 0){
        return Ack_rec(num1 - 1, 1);
    }else{
        return Ack_rec(num1 - 1, Ack_rec(num1, num2 - 1));
    }

}

int main(void) {

    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d%d", &num1, &num2);

    printf("Sequencia de Ackermann: %d", Ack_rec(num1, num2));

return 0;
}