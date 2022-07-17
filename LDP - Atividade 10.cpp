#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>


using namespace std;

int main(){


    setlocale(LC_ALL,"");

    //Usando laço de repetição, crie um programa que leia um número A e um número B.
    //Imprima todos os múltiplos de A até chegar em B.

    int a, b, i;

    cout << "Digite um número qualquer para iniciar a contagem: ";
    cin >> a;
    cout << "Digite um número qualquer para terminar a contagem: ";
    cin >> b;


    cout << "Os múltiplos de A até B são: \n";

    for (i = a; i < b ; i++){

        if(i % a == 0){
            cout << "\n" << i;
        }else {}
    }


    return 0;

}

