// Escreva um programa que leia do teclado um número de provas dadas
// em um semestre, o número de alunos matriculados e o número de
// questões e os valores das questões da cada prova de cada aluno. O
// programa deve imprimir a razão entre a média das notas dos alunos
// que tiraram pelo menos 5 e a média das notas dos alunos que tiraram
// abaixo de 5.

#include <stdio.h>

float media_notas_aluno(int n_provas, int n_questoes[]){

    int bool;
    float valor_questao, nota = 0, media = 0;

    for(int i = 0; i < n_provas; i++){
        printf("\n///// PROVA %d /////", i + 1);

        for(int j = 1; j <= n_questoes[i]; j++){
            printf("\nDigite o valor da questao %d: ", j);
            scanf("%f", &valor_questao);
        
            printf("O aluno acertou? (1 para sim e 0 para nao) ");
            scanf("%d", &bool);

            if(bool == 1){
                nota += valor_questao;
            }
        }

        media += nota;
    }

    media /= n_provas;

return media;
}

int main() {

    int n_provas, n_alunos;
    float media, numerador = 0, denominador = 0;

    printf("Digite quantas provas foram aplicadas no semestre: ");
    scanf("%d", &n_provas);

    printf("Digite o numero de alunos matriculados: ");
    scanf("%d", &n_alunos);

    int n_questoes[n_provas];

    for(int i = 0; i < n_provas; i++){
        printf("Digite a quantidade de questoes da prova %d: ", i + 1);
        scanf("%d", &n_questoes[i]);
    }

    for(int i = 1; i <= n_alunos; i++){
        printf("\n///// ALUNO %d /////\n", i);

        media = media_notas_aluno(n_provas, n_questoes);

        if(media >= 5){
            numerador += media;
        }else{
            denominador += media;
        }
    }

    printf("\n///// RAZAO DAS MEDIAS /////");
    printf("A razao entre as medias e: %.1f", numerador / denominador);

return 0;
}