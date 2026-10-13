// Escreva uma função recursiva para verificar se um número é primo.

#include <stdio.h>

int Primo_rec(int num, int div) {

    if(num <= 1){
        return 0;
    }
      
    if(div == 1){
        return 1;
    }

    if(num % div == 0){
        return 0;
    }
    
    return Primo_rec(num, div - 1);

}

int main(void) {

    int num, check;

    printf("Digite um numero natural: ");
    scanf("%d", &num);

    check = Primo_rec(num, num - 1);

    if(check == 0){
        printf("O numero nao e primo\n");
    }else{
        printf("O numero e primo\n");
    }

return 0;
}