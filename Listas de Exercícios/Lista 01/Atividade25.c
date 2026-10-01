// Escreva um programa em C que leia uma string e conte o número
// de caracteres, palavras e linhas na string.

#include <stdio.h>
#include <string.h>

int main(void) {

    char string[100];
    int caracteres = 0, palavras = 0, linhas = 0;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);

    caracteres = strlen(string) - 1;

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == ' ' && string[i - 1] != ' '){
            palavras++;
        }else if(string[i] == '\n' && string[i - 1] != ' '){
            palavras++;
        }
        
        if(string[i] == '\n'){
            linhas++;
        }
    }

    printf("Quantidade de caracteres: %d \n", caracteres);
    printf("Quantidade de palavras: %d \n", palavras);
    printf("Quantidade de linhas: %d", linhas);

return 0;
}