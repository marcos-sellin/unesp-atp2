// Escreva uma função que decida se um número é produto de dois
// números ímpares. Se for, a função deverá retornar esses dois números
// em variáveis passadas por referência.

#include <stdio.h>

int Produto_de_impares(int n, int *imp1, int *imp2){
    
    int guardar_i, guardar_j;

    for(int i = 2; i <= n; i++){
        for(int j = 2; j <= n; j++){
            if(i * j == n && i % 2 != 0 && j % 2 != 0){
                guardar_i = i;
                guardar_j = j;
            }
        }
    }

    *imp1 = guardar_i;
    *imp2 = guardar_j;

}

int main(void) {

    int numero, impar1 = 0, impar2 = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    Produto_de_impares(numero, &impar1, &impar2);

    if(impar1 == 0 || impar2 == 0){
        printf("\nO numero nao e o produto de dois impares");
    }else{
        printf("\nO numero e um produto de dois impares: \n");
        printf("Impar 1: %d\n", impar1);
        printf("Impar 2: %d", impar2);
    }

return 0;
}