// Escreva uma função que compara duas strings e retorna 1 se a
// primeira string vier antes da segunda na ordem alfabética.

#include <stdio.h>
#include <string.h>

int String_comp(char *string1, char *string2){

    int tam1 = strlen(string1);

    for(int i = 0; i < tam1; i++){
        if(string1[i] < string2[i]){
            return 1;
        }

        if(string1[i] > string2[i]){
            return -1;
        }
    }

return 0;
}

int main(void) {

    char palavra1[50], palavra2[50];
    int comp;

    printf("Digite a primeira palavra: ");
    fgets(palavra1, 50, stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0';

    printf("Digite a segunda palavra: ");
    fgets(palavra2, 50, stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0';

    comp = String_comp(palavra1, palavra2);

    if(comp == 0){
        printf("As palavras sao iguais");
    }else{
        printf("Em ordem alfabetica ");
    }

    if(comp > 0){
        printf("a primeira palavra vem primeiro");
    }else if(comp < 0){
        printf("a segunda palavra vem primeiro");
    }

return 0;
}