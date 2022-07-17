#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>
#define TAM 10

using namespace std;

//Faça um programa que leia 10 valores reais
//e os apresente na ordem inversa entrada.

int main(){
    setlocale(LC_ALL,"");

    int vetor[TAM],valor;

    cout << "\n Digite 10 valores: ";
    for(valor = 0; valor < TAM; valor++){
        cin >> vetor[valor];
    }

    cout << "\n A ordem inversa dos valores é: ";

    for (valor = 0; valor < 10; valor++){
        cout << vetor[9 - valor];
    }

    return 0;
}
