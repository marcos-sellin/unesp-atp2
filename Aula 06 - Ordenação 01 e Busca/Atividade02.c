// Implemente a função Ordenar_bolha (bubble sort) e responda 
// o seguinte:
//
// Explique o que faz e qual é a ideia do algoritmo.
//
// Faça um teste de mesa para um vetor com elementos 
// (5, 4, 3, 2, 1) e para um vetor com elementos 
// (1, 4, 3, 2, 5). Conte as trocas.
//
// Por que o algoritmo tem esse nome?
//
// -----------------------------------------------------------
//
// Resp 1: o algoritmo compara o elemento "i" do vetor com o
// "i + 1", começando cada execução pelo elemento "i = 0" e
// terminando no i = tam - 1 - n". Caso o elemento atual seja
// maior que o próximo, eles são trocados de lugar, caso
// contrário, a próxima execução começa.
// 
// Resp 2: no primeiro caso temos 10 trocas, no segundo 
// temos 3 trocas.
// 
// Resp 3: Ele recebe esse nome pois os maiores termos 
// "flutuam" para a sua posição correta em direção ao 
// final do vetor, assim como bolhas na água flutuam 
// para a superfície.
//
// Implementação da Função:

#include <stdio.h>

void Ordenar_bolha(int *vetor, int tam) {

    for(int n = 0; n < tam - 1; n++){
        for(int i = 0; i < tam - 1 - n; i++){
            if(vetor[i] > vetor[i + 1]){
                int aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }

}

int main(void) {

    int vetor[] = {7, 2, 5, 6, 1, 3, 4},
        tam = sizeof(vetor) / sizeof(vetor[0]);

    Ordenar_bolha(vetor, tam);

    printf("Vetor ordenado (selecao): ");

    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }

return 0;
}