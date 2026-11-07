// Implemente as funçõo Ordenar_selecao (selection sort) e
// Ordenar_insercao (insertion sort), sem utilizar funções
// auxiliares, e responda:
//
// Na função Ordenar_selecao, é realmente necessária a última
// iteração do laço de repetição? Por quê? E para a função
// Ordenar_insercao?
//
// -----------------------------------------------------------
//
// Resp: na função Ordernar_selecao, o vetor já se encontra
// ordenado quando o termo analisado é o último, portanto não
// há necessidade de ordená-lo. De forma análoga, na função
// Ordenar_insercao o último subvetor contém apenas um único
// termo, assim a comparação seria entre o termo em questão
// e ele mesmo, portanto também não é necessário realizar 
// a útlima comparação.
//
// Implementação das funções:

#include <stdio.h>

void Ordenar_selecao(int *vetor, int tam) {

    for(int i = 0; i < tam - 1; i++){
        int menor_i = i;
        int aux = vetor[i];

        for(int j = i + 1; j < tam; j++){
            if(vetor[j] < vetor[menor_i]){
                menor_i = j;
            }
        }

        vetor[i] = vetor[menor_i];
        vetor[menor_i] = aux;
    }

}

void Ordenar_insercao(int *vetor, int tam) {

    int store, i;

    for (int end = 1; end < tam; end++) {
        store = vetor[end];

        for (i = end; i > 0 && store < vetor[i - 1]; i--) {
            vetor[i] = vetor[i - 1];
        }

        vetor[i] = store;
    }

}

int main(void) {

    int vetor1[] = {7, 2, 5, 6, 1, 3, 4},
        vetor2[] = {7, 2, 5, 6, 1, 3, 4},
        tam1 = sizeof(vetor1) / sizeof(vetor1[0]),
        tam2 = sizeof(vetor2) / sizeof(vetor2[0]);

    Ordenar_selecao(vetor1, tam1);

    printf("Vetor ordenado (selecao): ");

    for(int i = 0; i < tam1; i++){
        printf("%d ", vetor1[i]);
    }

    Ordenar_insercao(vetor2, tam2);

    printf("\nVetor ordenado (insercao): ");

    for(int i = 0; i < tam2; i++){
        printf("%d ", vetor2[i]);
    }

return 0;
}