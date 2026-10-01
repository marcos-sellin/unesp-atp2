// Escreva um programa em C que declare um array de 10
// caracteres e use um ponteiro para contar quantos desses caracteres são letras
// maiusculas.

#include <stdio.h>

int main(void) {

    char letras[10] = {'A', 'b', 'C', 'd', 'E', 'f', 'G', 'h', 'I', 'j'};
    char *p = letras;
    int maiusculas = 0;

    for(int i = 0; i < 10; i++){
        if(*(p + i) >= 65 && *(p + i) <= 90){
            maiusculas++;
        }
    }

    printf("Quantidade de letras maiusculas: %d", maiusculas);

return 0;
}