#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.14

void main(){
    setlocale(LC_ALL,"");

    float areaCirculo, circunferenciaCirculo;
    double raio;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    areaCirculo = pi * pow(raio,2);

    printf("\nA �rea do circulo �: %.2lf \n", areaCirculo);

    printf("\nDigite o valor do raio: ");
    scanf("%lf", &raio);

    circunferenciaCirculo = 2 * pi * raio;

    printf("\nA circunfer�ncia do circulo �: %.2lf ", circunferenciaCirculo);










}
