// Escreva um programa em C que determine se um array de
// 10 inteiros é simétrico (um palíndromo).

#include <stdio.h>

int main(void) {

    int numeros[10] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    int j = 9, simetrico = 1;

    for(int i = 0; i < 10; i++){
        if(numeros[i] != numeros[j]){
            simetrico = 0;
        }

        j--;
    }

    if(simetrico == 1){
        printf("O array e simetrico");
    }else{
        printf("O array nao e simetrico");
    }

return 0;
}