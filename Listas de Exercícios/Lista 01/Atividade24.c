// Escreva um programa em C que verifique se todos os 
// elementos de um array de 5 inteiros são positivos.

#include <stdio.h>

int main(void) {

    int numeros[5] = {1, 2, 3, 4, 5};
    int todo_positivo = 1;

    for(int i = 0; i < 5; i++){
        if(numeros[i] < 0){
            todo_positivo = 0;
        }
    }

    if(todo_positivo == 1){
        printf("O array tem apenas numeros positivos");
    }else{
        printf("O array nao tem apenas numeros positivos");
    }

return 0;
}
