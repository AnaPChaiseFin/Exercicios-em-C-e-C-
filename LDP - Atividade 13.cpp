#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <locale.h>


using namespace std;

    //Ler N n�meros e imprimir quantos s�o pares e quantos s�o �mpares.

int main(){

    setlocale(LC_ALL,"");

    int cont, num, par=0, impar;



    while(cont++ < 5){
        cout << "Digite 5 n�meros " << cont << "o: ";
        cin >> num;
        if(num % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }

    cout << "\nQuantidade de n�meros pares: " << par;
    cout << "\nQuantidade de n�meros impares: " << impar;






    return 0;
}



