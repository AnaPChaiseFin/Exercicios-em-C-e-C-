#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>


using namespace std;

int main(){


    setlocale(LC_ALL,"");

    //Usando laço de repetição, faça um programa que leia N números
    //E imprima o maior e o menor deles;

    int cont, maior, menor, n;

     for (cont = 0; cont < 5; cont++){
        cout << "Digite o " << cont+1 << "o: ";
        cin >> n;
        if (n > maior){
            maior = n;
        }
        if (n < menor || cont == 0) {
            menor = n;
        }
    }
    cout << "\n O maior número é: " << maior;
    cout << "\n O menor número é: " << menor;


    return 0;
}
