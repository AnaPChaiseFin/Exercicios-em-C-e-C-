#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>


using namespace std;

int main(){


    setlocale(LC_ALL,"");

    //Usando la�o de repeti��o, crie um programa que leia um n�mero A e um n�mero B.
    //Imprima todos os m�ltiplos de A at� chegar em B.

    int a, b, i;

    cout << "Digite um n�mero qualquer para iniciar a contagem: ";
    cin >> a;
    cout << "Digite um n�mero qualquer para terminar a contagem: ";
    cin >> b;


    cout << "Os m�ltiplos de A at� B s�o: \n";

    for (i = a; i < b ; i++){

        if(i % a == 0){
            cout << "\n" << i;
        }else {}
    }


    return 0;

}

