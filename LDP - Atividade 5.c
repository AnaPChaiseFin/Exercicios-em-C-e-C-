#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int n1, n2, n3, maior, menor, intermedio;

    while (1){
    printf("\n Digite 3 números inteiros: ");
    scanf("\n %d %d %d", &n1, &n2, &n3);

    if ((n1 > n2) && (n1 > n3)){
        maior = n1;
        if(n2 > n3){
            intermedio = n2;
            menor = n3;
        } else {
            intermedio = n3;
            menor = n2;
        }
    }else if((n1 < n2) && (n1 < n3)){
        menor = n1;
        if(n2 > n3){
            maior = n2;
            intermedio = n3;
        } else {
            maior = n3;
            intermedio = n2;
        }
    }else{
        intermedio = n1;
        if(n2 > n3){
            maior = n2;
            menor = n3;
        } else {
            maior = n3;
            menor = n2;
        }
    }

    printf("\n Maior número é: %d", maior);
    printf("\n Menor número é: %d", menor);
    printf("\n Número intermediario é: %d", intermedio);
    }
}
