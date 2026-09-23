// Escreva um programa em C que leia 8 caracteres e verifique
// quantos são vogais.

#include <stdio.h>

int main(void) {

    int vogais = 0;
    char letras[8];

    for(int i = 0; i < 8; i++){
        printf("Digite uma letra (%d/8): ", i + 1);
        scanf("%c", &letras[i]);
        getchar();
        
        switch(letras[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vogais++;
            break;
        }
    }

    printf("\nQuantidade de vogais: %d", vogais);

return 0;
}