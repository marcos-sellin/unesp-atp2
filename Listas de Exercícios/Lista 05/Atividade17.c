// Escreva uma função recursiva para calcular o número de caminhos possíveis
// em uma grade NxN.

#include <stdio.h>

int N_Caminhos_rec(int larg, int comp) {

    if(larg == 1 || comp == 1){
        return 1;
    }

    return N_Caminhos_rec(larg - 1, comp) + N_Caminhos_rec(larg, comp - 1);

}

int main(void) {

    int larg, comp;

    printf("Digite a largura e o comprimento da grade: ");
    scanf("%d%d", &larg, &comp);

    printf("Caminhos possiveis: %d", N_Caminhos_rec(larg, comp));

return 0;
}