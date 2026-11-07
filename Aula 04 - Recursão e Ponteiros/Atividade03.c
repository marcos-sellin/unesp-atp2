// Tente escrever uma programa em C que leia um número n do teclado
// e instrua o usuário a resolver a torre de Hanói com n discos.

#include <stdio.h>

void Hanoi_rec(int n, int init, int end, int aux){

    if(n == 1){
        printf("Mova o disco 1 da torre %d para %d\n", init, end);
    }else{
        Hanoi_rec(n - 1, init, aux, end);

        printf("Mova o disco %d, da torre %d para %d\n", n, init, end);

        Hanoi_rec(n - 1, aux, end, init);
    }

}

int main(void) {

    int n;

    printf("Digite um numero de discos: ");
    scanf("%d", &n);

    Hanoi_rec(n, 1, 2, 3);

return 0;
}