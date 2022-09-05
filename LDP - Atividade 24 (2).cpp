#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

    //Crie uma função de ordene em ordem crescente os valores de um vetor de 10 posições.

void troca (int *a, int *b){
    int espera;

    espera = *a;
    *a = *b;
    *b = espera;
}

void bubbleSort(int *vetor, int tamanho) {
   for(int i = 0; i < tamanho; i++) {

      for(int j = i; j < tamanho; j++) {

         if(vetor[i] > vetor[j]) {
            troca( vetor+i, vetor+j);
         }
      }

   }
}

int main (){

    int vetor[10], cont;

    cout << "\n Desordenado ";
    for (cont = 0; cont < 10; cont++){

        vetor[cont] = rand()%50;
        cout << vetor[cont] << ": ";
    }

    bubbleSort(vetor, 10);

    cout << "\n Ordenado ";

    for(int i = 0; i < 10; i++){
        cout << vetor[i] << ": ";
    }

    return 0;
}

