// Escreva uma função que decida se um número é produto de quatro
// números ímpares. Se for, a função deverá retornar os números em
// variáveis passadas por referência. Tente utilizar a função anterior.

#include <stdio.h>

int Produto_de_primos(int n, int *imp1, int *imp2, int *imp3, int *imp4){
    
    

}

int main() {

    int numero, impar1 = 0, impar2 = 0, impar3 = 0, impar4 = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    Produto_de_primos(numero, &impar1, &impar2, &impar3, &impar4);

    if(impar1 == 0 || impar2 == 0 || impar3 == 0 || impar4 == 0){
        printf("\nO numero nao e o produto de quatro impares");
    }else{
        printf("\nO numero e um produto de quatro impares: \n");
        printf("Impar 1: %d\n", impar1);
        printf("Impar 2: %d\n", impar2);
        printf("Impar 3: %d\n", impar3);
        printf("Impar 4: %d", impar4);
    }

return 0;
}