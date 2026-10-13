// Implemente uma função recursiva para calcular a soma dos dígitos de um
// número inteiro.

#include <stdio.h>

int Soma_digito_rec(int num) {

    if(num / 10 == 0){
        return num;
    }else{
        return (num % 10) + Soma_digito_rec(num / 10);
    }

}

int main(void) {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Soma dos digitos: %d\n", Soma_digito_rec(num));

return 0;
}