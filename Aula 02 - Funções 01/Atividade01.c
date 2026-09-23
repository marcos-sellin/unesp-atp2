// Escreva uma função que leia do teclado o número de questões de
// uma prova e o valor de cada uma das questões. A função deve
// retornar a nota da prova.

#include <stdio.h>

float Nota_prova(void){

    int n_questoes, bool;
    float nota = 0, valor_questao;

    printf("Digite quantas questoes a prova tem: ");
    scanf("%d", &n_questoes);

    for(int i = 0; i < n_questoes; i++){
        printf("\nDigite o valor da questao %d: ", i + 1);
        scanf("%f", &valor_questao);
        
        printf("O aluno acertou? (1 para sim e 0 para nao) ");
        scanf("%d", &bool);

        if(bool == 1){
            nota += valor_questao;
        }
    }

return nota;
}

int main(void) {

    float nota;

    nota = Nota_prova();

    printf("Nota da prova: %.1f", nota);

return 0;
}