#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

//Para um n�mero de N pessoas, leia o nome e a idade.
//Por fim imprima na tela o nome e a idade da pessoa mais velha e da mais nova.
//Imprima tamb�m a m�dia das idades.


int main(){

    setlocale(LC_ALL,"");

    int idade, cont, maisIdade = 0,
    float soma = 0, quantidade = 0 ;
    string nome, maisVelho;

    cout << "\n Digite a quantidade de pessoas: ";
    cin >> quantidade;

    for(cont = 0; cont < quantidade; cont++){
        cout << "\n Nome: ";
        cin >> nome;
        cout << "\n Idade: ";
        cin >> idade;

        soma += idade;

        if (idade > maisIdade){
            maisVelho = nome;
            maisIdade = idade;
        }
    }

    cout << "\n O mais velho � " << maisVelho << " e sua idade � " << maisIdade;
    cout << "\n A m�dia das idade � " << soma/quantidade;





    return 0;
}
