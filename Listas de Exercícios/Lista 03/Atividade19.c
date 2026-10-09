// Crie uma função que recebe uma estrutura de carro (marca, modelo, ano) como
// parâmetro e imprima seus valores.

#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[25];
    char modelo[25];
    int ano;
} Ficha;

void Print_carro(Ficha carro){

    printf("\n/////FICHA DO CARRO/////");
    printf("\nMarca: \t%s", carro.marca);
    printf("\nModelo: %s", carro.modelo);
    printf("\nAno: \t%d\n", carro.ano);

};

int main(void) {

    Ficha carro;

    printf("Informe a marca do carro: ");
    fgets(carro.marca, 25, stdin);
    carro.marca[strcspn(carro.marca, "\n")] = '\0';

    printf("Informe o modelo: ");
    fgets(carro.modelo, 25, stdin);
    carro.modelo[strcspn(carro.modelo, "\n")] = '\0';

    printf("Informe o ano de fabricacao: ");
    scanf("%d", &carro.ano);

    Print_carro(carro);

return 0;
}
