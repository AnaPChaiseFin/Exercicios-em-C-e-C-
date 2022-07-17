#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){


    setlocale(LC_ALL,"");

    //Ler um valor inteiro (aceitar somente valores entre 1 e 10)
    //Escrever a tabuada de 1 a 10 do valor lido.

    int cont, valor, resultado;

    do{
    cout << "Digite um valor: ";
    cin >> valor;
        if(valor > 10 || valor <= 0){
            cout << "Valor incorreto, comece novamente!\n";
        }
    }while(valor > 10 || valor <= 0);


    for(cont = 1; cont <= 10; cont++){
        resultado = valor*cont;
        cout << "\n" << valor << " X " << cont << "= " << resultado;

    }



    return 0;
}
