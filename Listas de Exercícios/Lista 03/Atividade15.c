// Atribua os valores de uma estrutura de endereço para outra e imprima os valores
// da nova estrutura.

#include <stdio.h>
#include <string.h>

typedef struct {
    char rua[50];
    int numero;
    char bairro[50];
    char cidade[40];
    char estado[25];
} Local;

int main(void) {

    Local casa;

    printf("Informe a rua da residencia: ");
    fgets(casa.rua, 50, stdin);
    casa.rua[strcspn(casa.rua, "\n")] = '\0';

    printf("Informe o numero da residencia: ");
    scanf("%d", &casa.numero);
    getchar();

    printf("Informe o bairro: ");
    fgets(casa.bairro, 50, stdin);
    casa.bairro[strcspn(casa.bairro, "\n")] = '\0';

    printf("Informe a cidade: ");
    fgets(casa.cidade, 40, stdin);
    casa.cidade[strcspn(casa.cidade, "\n")] = '\0';

    printf("Informe o endereco: ");
    fgets(casa.estado, 25, stdin);
    casa.estado[strcspn(casa.estado, "\n")] = '\0';

    Local endereco = casa;

    printf("\n/////ENDERECO CADASTRADO/////");
    printf("\nRua: \t%s", endereco.rua);
    printf("\nNumero: %d", endereco.numero);
    printf("\nBairro: %s", endereco.bairro);
    printf("\nCidade: %s", endereco.cidade);
    printf("\nEstado: %s\n", endereco.estado);

return 0;
}
