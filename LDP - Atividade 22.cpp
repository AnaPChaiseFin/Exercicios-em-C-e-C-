#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

    //Quais serão os valores de x, y e p ao final do trecho de código abaixo?

int main(){

    setlocale(LC_ALL, "");

    int x, y;
    int *p;

    y = 0;
    p = &y;

    x = *p;
    x = 4;

    (*p)++;

    --x;

    (*p)+= x;

    cout << "\n y: " << y;
    cout << "\n(*p): " << *p;
    cout << "\n X: " << x;



    return 0;
}

