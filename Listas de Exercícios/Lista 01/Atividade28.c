// Escreva um programa em C que leia uma string e substitua
// todas as ocorrências de um caractere por outro.

#include <stdio.h>
#include <string.h>

int main(void) {

    char string[100], substituir, substituto;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strlen(string) - 1] = '\0';

    printf("Digite a letra que sera substituida: ");
    scanf("%c", &substituir);
    getchar();

    printf("Digite a letra que sera a substituta: ");
    scanf("%c", &substituto);

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == substituir){
            string[i] = substituto;
        }
    }

    printf("String alterada: %s", string);

return 0;
}