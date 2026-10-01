// Escreva uma função que decida se um número é produto de quatro
// números ímpares. Se for, a função deverá retornar os números em
// variáveis passadas por referência. Tente utilizar a função anterior.

#include <stdio.h>

int Produto_de_impares(int n, int seq, int cont_1, int *imp1, int *imp2, int *imp3, int *imp4){
    
    int div_i, div_j, div_k, init = 1;

    if(cont_1 == 0){
        init = 3;
    }

    if(n == 1){
        *imp1 = 1;
        *imp2 = 1;
        *imp3 = 1;
        *imp4 = 1;
        return 1;
    }

    for(int i = init; i < n; i += 2){
        div_i = n / i;

        if(n % i == 0){
            for(int j = init; j <= div_i; j += 2){
                div_j = div_i / j;

                if(div_i % j == 0){
                    for(int k = init; k <= div_j; k += 2){
                        div_k = div_j / k;

                        if(div_j % k == 0 && div_k % 2 != 0){
                            *imp1 = i;
                            *imp2 = j;
                            *imp3 = k;
                            *imp4 = div_k;

                            if(seq > 1){
                                seq--;
                            }else{
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }

if(imp4 == 0){
    return 0;
}else{
    return 1;
}
}

int main(void) {

    int numero, sequencia, contar_1, impar1, impar2, impar3, impar4 = 0, eh_produto;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Qual o maximo de vezes que a funcao deve rodar? ");
    scanf("%d", &sequencia);

    printf("Considerar o numero 1 na funcao (1 = sim, 0 = nao)? ");
    scanf("%d", &contar_1);

    eh_produto = Produto_de_impares(numero, sequencia, contar_1, &impar1, &impar2, &impar3, &impar4);

    if(eh_produto == 0){
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