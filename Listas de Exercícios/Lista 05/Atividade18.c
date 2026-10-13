// Implemente uma função recursiva para resolver o problema da 
// Torre de Hanoi.

#include <stdio.h>

void Hanoi_rec(int num, char origem, char destino, char auxiliar) {

    if(num == 1){
        printf("Mova o disco 1 de %c para %c\n", origem, destino);
        return;
    }

    Hanoi_rec(num - 1, origem, auxiliar, destino);

    printf("Mova o disco %d de %c para %c\n", num, origem, destino);

    Hanoi_rec(num - 1, auxiliar, destino, origem);
}

int main(void) {
    
    int num;

    printf("Digite a quantidade de discos: ");
    scanf("%d", &num);

    printf("\nPassos para Torre de Hanoi com %d discos:\n", num);
    Hanoi_rec(num, 'A', 'C', 'B');

    return 0;
}