#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");


    float soma = 0, nota, media;
    int cont;


    for (cont = 0; cont < 3; cont++){
        printf("Digite a %da nota: ", cont+1);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma/3;


    if (media >= 7){
            printf("\nA media do aluno é %.2f e esta Aprovado!", media);
    }else if ((5 <= media) && (media < 7)){
            printf("\nA media do aluno é %f e esta em Recuperacao!", media);
    }else {
            printf("\nA media do aluno é %f e esta Reprovado!", media);
    }

    printf("\n");

    return 0;
}

//UDAR PARA FOR a coleta de dados
   // while (n > 0 2 && n < 3){}
