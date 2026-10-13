// Escreva uma função recursiva para encontrar o número de ocorrências de
// um elemento em um array.

#include <stdio.h>

int Num_ocur_rec(int *nums, int num, int tam) {

    if(tam == 0){
        return 0;
    }

    if(nums[tam - 1] == num){
        return 1 + Num_ocur_rec(nums, num, tam - 1);
    } else {
        return Num_ocur_rec(nums, num, tam - 1);
    }
}

int main(void) {

    int nums[] = {1, 2, 3, 4, 5}, num = 5;
    int tam = sizeof(nums) / sizeof(nums[0]);
    int ocur = Num_ocur_rec(nums, num, tam);

    printf("Ocorrencias do numero %d: %d\n", num, ocur);

    return 0;
}