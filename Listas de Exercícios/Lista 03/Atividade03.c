// Atribua os valores de uma estrutura para outra e imprima os valores da nova
// estrutura.

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int main(void) {

    Data ler;
    Data atual;

    printf("Informe o dia, mes e ano atuais: ");
    scanf("%d%d%d", &ler.dia, &ler.mes, &ler.ano);

    atual = ler;

    printf("\nData atual: %d/%d/%d\n", atual.dia, atual.mes, atual.ano);

return 0;
}