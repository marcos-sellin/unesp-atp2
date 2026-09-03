// O histograma de um conjunto de dados é um gráfico da
// frequência com que cada valor aparece. Escreva um programa que leia um
// vetor de tamanho informado pelo usuário e com valores inteiros entre 1 e 9 e
// imprima o histograma na mesma forma que o exemplo: para um vetor de
// tamanho 20 com os valores 1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 6, 7, 8, 8, 8, 9, 9, 9, 9, 9 deverá imprimir:
// +---------+
// |        *|
// |*       *|
// |**     **|
// |***    **|
// |**** ****|
// +---------+
//  123456789

#include <stdio.h>

int main() {

    int tamanho_vetor,              // conta quantos números serão digitados
        maior_frequencia = 0,       // armazena qual dos números digitados aparece mais vezes
        maior_frequencia_i;         // armazena o indice da maior frequência no vetor frequencia_numeros

    printf("Informe quantos numeros serao digitados: ");
    scanf("%d", &tamanho_vetor);

    int numeros[tamanho_vetor],     // vetor que guarda todos os numeros digitados
        frequencia_numeros[10],     // vetor que armazena a frequência de aparição de cada numero
        frequencia_proporcao[10];   // transforma as frequências em uma proporção de mínimo 0 e máximo 5

    // zera todas as posições do vetor para que somas sejam realizadas depois
    for(int i = 0; i < 10; i++){    
        frequencia_numeros[i] = 0;
    }

    // entrada de números, dependendo do número digitado sua frequência é aumentada por 1 em outro vetor
    for(int i = 0; i < tamanho_vetor; i++){
        printf("Digite um numero (1 a 9): ");
        scanf("%d", &numeros[i]);

        if(numeros[i] >= 1 && numeros[i] <= 9){
        frequencia_numeros[numeros[i] - 1]++;
        }
    }

    // define qual a maior frequência e seu índice no vetor
    for(int i = 0; i < 10; i++){
        if(frequencia_numeros[i] > maior_frequencia){
            maior_frequencia = frequencia_numeros[i];
            maior_frequencia_i = i;
        }
    }

    // transforma todos os valores da frequência em uma proporção de mínimo 0 e máximo 5
    for(int i = 0; i < 10; i++){
        if(i == maior_frequencia_i){
            frequencia_proporcao[i] = 5;
        }else{
            frequencia_proporcao[i] = (frequencia_numeros[i] * 5) / maior_frequencia;
        }
    }

    // passos para a impressão do gráfico no terminal
    printf("\n+---------+\n");

    for(int i = 5; i >= 1; i--){
        printf("|");

        for(int j = 0; j < 9; j++){
            if(frequencia_proporcao[j] >= i){
                printf("*");
            }else{
                printf(" ");
            }
        }

        printf("|\n");
    }

    printf("+---------+\n");
    printf(" 123456789 ");

return 0;
}
