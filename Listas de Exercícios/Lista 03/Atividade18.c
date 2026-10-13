// Declare e inicialize uma estrutura aninhada para armazenar as informações de
// um endereço (rua, número, cidade) e imprima seus valores.

#include <stdio.h>

typedef struct {
    char rua[50];
    int numero;
    char cidade[40];
} Endereco;

typedef struct {
    char estado[50];
    char uf[3];
    Endereco municipal;
} Local;

int main(void) {

    Local residencia = {
        .municipal.rua = "Rua Sao Salvador",
        .municipal.numero = 682,
        .municipal.cidade = "Presidente Venceslau",
        .estado = "Sao Paulo",
        .uf = "SP"
    };

    printf("/////DADOS DA RESIDENCIA/////");
    printf("\nRua: \t%s", residencia.municipal.rua);
    printf("\nNumero: %d", residencia.municipal.numero);
    printf("\nCidade: %s", residencia.municipal.cidade);
    printf("\nEstado: %s", residencia.estado);
    printf("\nUF: \t%s\n", residencia.uf);

return 0;
}
