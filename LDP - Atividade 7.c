#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");


    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota:  ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3)/3;


    if (media >= 7){
            printf("\nA media do aluno щ %.2f e esta Aprovado!", media);
    }else if ((5 <= media) && (media < 7)){
            printf("\nA media do aluno щ %f e esta em Recuperação!", media);
    }else {
            printf("\nA media do aluno щ %f e esta Reprovado!", media);
    }

    printf("\n");

    return 0;
}
