// Escreva uma função que receba como parâmetro um número de
// provas e leia do teclado o número de questões e os valores das
// questões de cada prova. A função deve retornar a média das provas.

#include <stdio.h>

float media_provas(int n){

    float nota, media;

    for(int i = 0; i < n; i++){
        printf("Digite a nota de uma prova: ");
        scanf("%f", &nota);
        media += nota;
    }

    media /= n;

return media;
}

int main() {

    int n_provas;
    float media;

    printf("Digite o numero de provas: ");
    scanf("%d", &n_provas);

    media = media_provas(n_provas);

    printf("Media das provas: %.1f", media);

return 0;
}