#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

    //Utilizando os conceitos de ponteiro
    //Crie uma função chamada Troca, que irá realizar a troca dos valores de duas variáveis int.
    //Utilize passagem de parâmetro por referência.

void troca (int *n, int *m){
    int espera;

    espera = *n;
    *n = *m;
    *m = espera;

}

int main(){


    int a = 1;
    int b = 2;

    cout << "\n a: " << a;
    cout << "\n b: " << b;

    troca (&a,&b);

    cout << "\n\n a: " << a;
    cout << "\n b: " << b;



    return 0;
}
