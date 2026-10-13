// Utilize a declaração de tipos (typedef) para simplificar a definição de uma
// estrutura para armazenar as informações de um carro (marca, modelo, ano) e
// imprima seus valores.

#include <stdio.h>

typedef struct {
    char marca[50];
    char modelo[50];
    int ano;
} Automotivo;

int main(void) {

    Automotivo carro;

    printf("Informe a marca, modelo e ano do carro: ");
    scanf("%s%s%d", &carro.marca, &carro.modelo, &carro.ano);

    printf("\n/////DADOS DO CARRO/////");
    printf("\nMarca: %s", carro.marca);
    printf("\nModelo: %s", carro.modelo);
    printf("\nAno: %d\n", carro.ano);

return 0;
}