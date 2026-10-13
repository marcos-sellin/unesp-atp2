// Desenvolva uma função recursiva para encontrar a raiz quadrada de um
// número inteiro utilizando o método de busca binária.

#include <stdio.h>

int Busca_raiz_rec(int num, int inicio, int fim, int resposta) {

    if(inicio > fim){
        return resposta;
    }

    int meio = inicio + (fim - inicio) / 2;
    int quadrado = meio * meio;

    if(quadrado == num){
        return meio;
    }

    if(quadrado < num){
        return Busca_raiz_rec(num, meio + 1, fim, meio);
    }

    return Busca_raiz_rec(num, inicio, meio - 1, resposta);
}

int Raiz_rec(int num) {

    if(num == 0 || num == 1){
        return num;
    }

    return Busca_raiz_rec(num, 1, num / 2, 0);
}

int main(void) {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Raiz quadrada aproximada: %d", Raiz_rec(num));

    return 0;
}