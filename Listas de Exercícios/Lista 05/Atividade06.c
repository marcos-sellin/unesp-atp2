// Implemente uma função recursiva para imprimir os elementos de um array
// na ordem inversa.

#include <stdio.h>

void Inverte_arr_rec(int *nums, int tam) {

    if(tam >= 0){
        printf("%d ", nums[tam]);

        Inverte_arr_rec(nums, tam - 1);
    }
} 

int main(void) {

    int nums[5] = {1, 2, 3, 4, 5};
    int tam = 5;

    printf("Array invertido: ");

    Inverte_arr_rec(nums, tam - 1);

return 0;
}