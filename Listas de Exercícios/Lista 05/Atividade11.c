// Crie uma função recursiva para encontrar o maior divisor comum de um
// array de números.

#include <stdio.h>

int Mdc(int num1, int num2) {
    
    if(num2 == 0){
        return num1;
    }

    return Mdc(num2, num1 % num2);
}

int Mdc_arr_rec(int *nums, int tam, int i) {

    if(i == tam - 1){
        return nums[i];
    }

    return Mdc(nums[i], Mdc_arr_rec(nums, tam, i + 1));

}

int main(void) {

    int nums[] = {12, 24, 36, 48};
    int tam = sizeof(nums) / sizeof(nums[0]);

    printf("MDC dos numeros: %d\n", Mdc_arr_rec(nums, tam, 0));

return 0;
}