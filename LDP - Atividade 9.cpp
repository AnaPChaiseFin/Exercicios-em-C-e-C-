#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>


using namespace std;



int main(){


    setlocale(LC_ALL,"");

    //Usando laço de repetição, crie um programa que leia um número A.
    //E imprima todos os números pares até A.

    int a, i;

    cout << "Digite um número qualquer: ";
    cin >> a;

    cout << "São pares os números : \n";

    for (i = a; i > 0 ; i--){
        if(i % 2 == 0){
            cout << "\n" << i;
        }else {}
    }






    return 0;

}
