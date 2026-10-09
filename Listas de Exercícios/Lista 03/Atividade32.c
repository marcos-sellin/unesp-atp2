// Declare um arranjo de estruturas para armazenar as informações de 4 produtos
// (nome, código, preço) e imprima seus valores.

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[25];
    int codigo;
    float preco;
} Info;

int main(void) {

    Info produtos[4];

    printf("/////COLETA DE DADOS/////\n");

    for(int i = 0; i < 4; i++){
        printf("Informe o nome do produto: ");
        fgets(produtos[i].nome, 25, stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        printf("Informe o codigo do produto: ");
        scanf("%d", &produtos[i].codigo);
        getchar();

        printf("Informe o preco do produto: ");
        scanf("%f", &produtos[i].preco);
        getchar();

        printf("\n");
    }

    printf("=====FIM DA COLETA DE DADOS=====\n");

    for(int i = 0; i < 4; i++){
        printf("\n/////DADOS DO PRODUTO %d/////", i + 1);
        printf("\nNome:\t %s", produtos[i].nome);
        printf("\nCodigo:\t %d", produtos[i].codigo);
        printf("\nPreco:\t %.2f\n", produtos[i].preco);
    }

return 0;
}