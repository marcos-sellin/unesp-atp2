// Escreva um programa que leia uma quantidade arbitrária de nomes e
// imprima esses nomes em ordem alfabética.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Ordem_alfabetica(char **string, int quant) {

    char *temp;

    for(int i = 0; i < quant - 1; i++){
        for(int j = 0; j < quant - i - 1; j++){
            if(strcmp(string[j], string[j + 1]) > 0){
                temp = string[j];
                string[j] = string[j + 1];
                string[j + 1] = temp;
            }
        }
    }

}

int main(void) {

    int n;

    printf("Informe quantos nomes serão digitados: ");
    scanf("%d", &n);
    getchar();

    char **nomes = malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        nomes[i] = malloc(50 * sizeof(char));
        printf("Digite um nome: ");
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    Ordem_alfabetica(nomes, n);

    printf("Nomes em ordem alfabetica: \n");

    for(int i = 0; i < n; i++){
        printf("%s ", nomes[i]);
        free(nomes[i]);
    }

    free(nomes);

return 0;
}