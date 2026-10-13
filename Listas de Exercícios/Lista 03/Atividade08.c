// Declare um arranjo de estruturas para armazenar as informações de 5 produtos
// (nome, código, preço) e imprima seus valores.

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int codigo;
    float preco;
} Info;

int main(void) {

    Info produtos[5];

    printf("/////COLETA DE DADOS/////\n");

    for(int i = 0; i < 5; i++){
        printf("Informe o nome do produto: ");
        fgets(produtos[i].nome, 50, stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        printf("Informe o codigo e o preco: ");
        scanf("%d%f", &produtos[i].codigo, &produtos[i].preco);
        getchar();

        printf("\n");
    }

    printf("=====FIM DA COLETA DE DADOS=====\n");

    for(int i = 0; i < 5; i++){
        printf("\n/////DADOS DO PRODUTO %d/////", i + 1);
        printf("\nNome: %s", produtos[i].nome);
        printf("\nCodigo: %d", produtos[i].codigo);
        printf("\nPreco: %.2f\n", produtos[i].preco);
    }

return 0;
}