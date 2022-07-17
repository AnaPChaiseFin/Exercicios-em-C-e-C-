#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <locale.h>


using namespace std;

    //Ler N números e imprimir quantos são pares e quantos são ímpares.

int main(){

    setlocale(LC_ALL,"");

    int cont, num, par=0, impar;



    while(cont++ < 5){
        cout << "Digite 5 números " << cont << "o: ";
        cin >> num;
        if(num % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }

    cout << "\nQuantidade de números pares: " << par;
    cout << "\nQuantidade de números impares: " << impar;






    return 0;
}



