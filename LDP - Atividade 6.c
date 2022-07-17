#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL, "");

    float h;

    printf("Digite a altura do atleta: ");
    scanf("%f",&h);


    if (h >= 1.95){
        printf("Ótima: %.2f", h);
    }
    else if ((1.95 > h) && (h >= 1.85)){
        printf("Boa: %.2f", h);
    }
    else if ((1.85 > h) && (h >= 1.75)){
        printf("Regular: %.2f", h);
    }
    else {
        printf("Insuficiente: %.2f", h);
    }

}
