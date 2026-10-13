// Crie uma função recursiva para gerar todos os subconjuntos de um
// conjunto dado.

#include <stdio.h>

void Subconj_rec(int conj[], int tam_conj, int i, int subconj[], int tam_subconj) {

    if(i == tam_conj){
        printf("{ ");
        for (int i = 0; i < tam_subconj; i++) {
            printf("%d ", subconj[i]);
        }
        printf("}\n");
        return;
    }

    subconj[tam_subconj] = conj[i];
    Subconj_rec(conj, tam_conj, i + 1, subconj, tam_subconj + 1);

    Subconj_rec(conj, tam_conj, i + 1, subconj, tam_subconj);
}

int main(void) {

    int conj[] = {1, 2, 3};
    int tam_conj = sizeof(conj) / sizeof(conj[0]);
    int subconj[tam_conj];

    printf("Subconjuntos:\n");
    Subconj_rec(conj, tam_conj, 0, subconj, 0);

    return 0;
}