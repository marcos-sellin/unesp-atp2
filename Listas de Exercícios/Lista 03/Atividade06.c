// Declare e inicialize uma estrutura aninhada para armazenar as informações de
// uma data (dia, mês, ano) e imprima seus valores.

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data nas;
} Nascimento;

int main(void) {

    Nascimento data = {1, 1, 2001};

    printf("/////DATA DE NASCIMENTO/////");
    printf("\nDia: %d", data.nas.dia);
    printf("\nMes: %d", data.nas.mes);
    printf("\nAno: %d\n", data.nas.ano);

return 0;
}