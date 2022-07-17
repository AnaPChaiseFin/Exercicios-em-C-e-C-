#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <locale.h>
#define TAM 10

using namespace std;

//Escreva um programa que leia dois vetores com 10 elementos cada
//e gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.
//Ao final o programa deverá mostrar os dois vetores originais e o terceiro vetor com os valores intercalados.


int main(){

    setlocale(LC_ALL,"");


    int i, j, vetor1[TAM], vetor2[TAM], vetor3[20];

    cout << "Números vetor 1: ";
    for (i = 0; i < TAM; i++) {
        vetor1[i] = rand()%10;
        cout << vetor1[i];
    }
    cout << "\n";
    cout << "\nNúmeros vetor 2: ";
    for (i = 0; i < TAM; i++) {
        vetor2[i] = rand()%10;
        cout << vetor2[i];
    }
    cout << "\n";
    for (i = 0; i < TAM; i++) {
        vetor3[i*2] = vetor1[i];
    }
    for (i = 0; i < TAM; i++) {
        vetor3[i*2+1] = vetor2[i];
    }
    cout << "\nVetor 3: ";
    for (i = 0; i < TAM*2; i++) {
        cout << vetor3[i];
    }


    return 0;
}

