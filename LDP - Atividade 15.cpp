#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

//Fa�a um programa para para ler N n�meros entre 1 e 12
//E imprimir o nome do m�s correspondente para cada um deles.

int main(){
    setlocale(LC_ALL,"");

    int num;

    if (num >= 12 || num <= 1){
        cout << "Digite 1 n�mero de 1 at� 12: ";
        cin >> num;
        switch(num){
        case 1:
            cout << "\n Janeiro";
            break;
        case 2:
            cout << "\n fevereiro";
            break;
        case 3:
            cout << "\n Mar�o";
            break;
        case 4:
            cout << "\n Abril";
            break;
        case 5:
            cout << "\n Maio";
            break;
        case 6:
            cout << "\n Junho";
            break;
        case 7:
            cout << "\n Julho";
            break;
        case 8:
            cout << "\n Agosto";
            break;
        case 9:
            cout << "\n Setembro";
            break;
        case 10:
            cout << "\n Outubro";
            break;
        case 11:
            cout << "\n Novembro";
            break;
        case 12:
            cout << "\n Dezembro";
            break;
        default:
            cout << "\n N�mero inv�lido. Comece novamente!";
        }
    }





    return 0;
}
