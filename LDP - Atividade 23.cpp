#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

    //Utilizando os conceitos de ponteiro
    //Crie uma fun��o chamada Troca, que ir� realizar a troca dos valores de duas vari�veis int.
    //Utilize passagem de par�metro por refer�ncia.

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
