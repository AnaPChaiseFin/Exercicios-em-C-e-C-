#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <locale.h>


using namespace std;

//Faça um programa que leia 5 valores inteiros
//armazeno-os em um vetor, calcule e apresente a soma destes valores.
//Na sequencia, calcule e apresente a média dos valores entrados
//e aqueles que são maiores e menores que a média.

int main(){

    setlocale(LC_ALL,"");

    int vetor[5], i, soma = 0,  menor, maior;
    float media;

    cout << "Digite 5 valores: \n";

    for(i = 0; i < 5; i++){
        cin >> vetor[i];
    }

    for(i = 0; i < 5; i++){
        soma += vetor[i];
    }

    cout << "\nSoma dos valores " << soma;

    media = soma / 5;

    cout << "\nMédia dos valores " << media;

    for(i = 0; i < 5; i++){
        if(media > vetor[i]){
            cout << "\nO numero da posição " << i <<  " é menor que a média " << vetor[i];
        }else{
            cout << "\nO numero da posição " << i <<  " é maior que a média " << vetor[i];
        }
    }

    free(vetor);

    return 0;
}




