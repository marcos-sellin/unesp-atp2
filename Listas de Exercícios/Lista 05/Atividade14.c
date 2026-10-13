// Implemente uma função recursiva para verificar se uma palavra é um
// palíndromo.

#include <stdio.h>
#include <string.h>

int Palindromo_rec(char *palavra, int tam, int i) {

    if(i == tam || i == tam + 1){
        return 1;
    }

    if(palavra[i] == palavra[tam - 1]){
        return Palindromo_rec(palavra, tam - 1, i + 1);
    }else{
        return 0;
    }

}

int main(void) {

    char palavra[50];

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    int tam = strlen(palavra);
    int palindromo_test = Palindromo_rec(palavra, tam, 0);

    if(palindromo_test == 1){
        printf("A palavra e um palindrom\n");
    }else{
        printf("A palavra nao e um palindromo\n");
    }

return 0;
}