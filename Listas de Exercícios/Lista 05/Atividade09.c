// Escreva uma função recursiva para inverter uma string.

#include <stdio.h>
#include <string.h>

void Inv_str_rec(char *palavra, int tam, int i) {

    char aux;

    if(tam == i || tam == i + 1){
        return *palavra;
    }
            
    aux = palavra[i];
    palavra[i] = palavra[tam - 1];
    palavra[tam - 1] = aux;

    Inv_str_rec(palavra, tam - 1, i + 1);

}

int main(void) {

    char palavra[50];

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    Inv_str_rec(palavra, strlen(palavra), 0);

    printf("String invertida: %s\n", palavra);

return 0;
}