// Programa que realiza uma busca binaria no intervalo
// dos números inteiros de 0 à 1000

#include <stdio.h>

int busca_binaria(int start, int end) {

    int bool, metade;

    if(start + 1 == end){
        printf("Seu numero e menor que %d? ", end);
        scanf("%d", &bool);

        if(bool == 1){
            return start;
        }else{
            return end;
        }
    }else{
        metade = (start + end) / 2;

        printf("Seu numero e menor ou igual a %d? ", metade);
        scanf("%d", &bool);

        if(bool == 1){
            return busca_binaria(start, metade);
        }else{
            return busca_binaria(metade + 1, end);
        }
    }

}

int main() {

    int bool, resultado;

    printf("Passos para o programa: \n");
    printf("1 - Pense em um numero inteiro de 0 a 1000; \n");
    printf("2 - Para cada pergunta responda com 1 para sim ou 0 para nao \n\n");

    printf("Seu numero e menor ou igual a 500? ");
    scanf("%d", &bool);
    
    if(bool == 1){
        resultado = busca_binaria(0, 500);
    }else{
        resultado = busca_binaria(501, 1000);
    }

    printf("\nSeu numero e %d", resultado);

return 0;
}