// Crie uma função recursiva para encontrar o máximo elemento em um array.

#include <stdio.h>

int Max_arr_rec(int *nums, int init, int end) {

    if(init == end){
        return nums[init];
    }

    int maior_restante = Max_arr_rec(nums, init + 1, end);

    if(nums[init] > maior_restante){
        return nums[init];
    }else{
        return maior_restante;
    }
}

int main(void) {
    
    int nums[] = {1, 8, 3, 15, 5, 2};
    int tamanho = 5;

    int maior = Max_arr_rec(nums, 0, tamanho - 1);

    printf("Maior elemento do array: %d\n", maior);

return 0;
}