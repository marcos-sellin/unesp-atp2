// Escreva um programa em C que leia duas strings e concatene-
// as. Imprima a string resultante.

#include <stdio.h>
#include <string.h>

int main(void) {

    char string1[100], string2[50];

    printf("Digite a primeira string: ");
    fgets(string1, 50, stdin);
    string1[strlen(string1) - 1] = '\0';

    printf("Digite a segunda string: ");
    fgets(string2, 50, stdin);
    string2[strlen(string2) - 1] = '\0';

    strcat(string1, string2);

    printf("String concatenada: %s", string1);

return 0;
}