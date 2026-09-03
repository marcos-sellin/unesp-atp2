// Escreva um programa que lê duas strings do teclado com até 80 caracteres e
// informa se elas são iguais.

#include <stdio.h>
#include <string.h>

int main() {

    int sao_iguais;
    char palavra1[81], palavra2[81];

    printf("Digite uma palavra: ");
    fgets(palavra1, 81, stdin);
    palavra1[strlen(palavra1) - 1] = '\0';

    printf("Digite outra palavra: ");
    fgets(palavra2, 81, stdin);
    palavra2[strlen(palavra2) - 1] = '\0';

    sao_iguais = strcmp(palavra1, palavra2);

    if(sao_iguais == 0){
        printf("As palavras sao iguais");
    }else{
        printf("As palavras sao diferentes");
    }

return 0;
}