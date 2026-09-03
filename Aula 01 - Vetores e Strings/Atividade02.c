// Escreva uma função que lê uma palavra do teclado e informa se ela é
// palíndroma. (Exemplos de palíndromos: ARARA, RADAR, REVIVER)

#include <stdio.h>
#include <string.h>

int checar_palindromo(char palavra[]) {

    int tamanho = strlen(palavra);

    for(int i = 0; i < tamanho; i++){
        if(palavra[i] != palavra[tamanho - i - 1]){
            return 0;
        }
    }

    return 1;

}

int main() {

    int palindromo;
    char palavra[100];

    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    palavra[strlen(palavra) - 1] = '\0';

    palindromo = checar_palindromo(palavra);

    if(palindromo == 1){
        printf("A palavra e um palindromo");
    }else{
        printf("A palavra nao e um palindromo");
    }

return 0;
}