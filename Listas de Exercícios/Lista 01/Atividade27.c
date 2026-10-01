// Escreva um programa em C que leia uma string e verifique
// se ela  ́e um palíndromo.

#include <stdio.h>
#include <string.h>

int main(void) {

    char string[100], invertida[100];

    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strlen(string) - 1] = '\0';

    int comp_palindromo, j = strlen(string);

    for(int i = 0; string[i] != '\0'; i++){
        invertida[i] = string[j - i - 1];
    }

    invertida[j] = '\0';

    comp_palindromo = strcmp(string, invertida);

    if(comp_palindromo == 0){
        printf("A string e um palindromo");
    }else{
        printf("A string nao e um palindromo");
    }

return 0;
}