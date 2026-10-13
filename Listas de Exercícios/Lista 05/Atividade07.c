// Crie uma função recursiva para calcular a potência de um número.

#include <stdio.h>

int Pot_rec(int num, int exp) {

    if(exp == 1){
        return num;
    }else{
        return num * Pot_rec(num, exp - 1);
    }

}

int main(void) {

    int num, exp;

    printf("Digite uma base e um expoente: ");
    scanf("%d%d", &num, &exp);

    printf("Potencia: %d\n", Pot_rec(num, exp));

return 0;
}