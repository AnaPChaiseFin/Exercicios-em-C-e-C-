#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>


using namespace std;



int main(){


    setlocale(LC_ALL,"");

    //Usando la�o de repeti��o, crie um programa que leia um n�mero A.
    //E imprima todos os n�meros pares at� A.

    int a, i;

    cout << "Digite um n�mero qualquer: ";
    cin >> a;

    cout << "S�o pares os n�meros : \n";

    for (i = a; i > 0 ; i--){
        if(i % 2 == 0){
            cout << "\n" << i;
        }else {}
    }






    return 0;

}
