#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>


using namespace std;


int main(){

    //Construa um algoritmo que imprima na tela uma matriz de L linha e C colunas de forma que:
    //se o numero de linha L for igual ao da coluna C, então o valor da célula será 0;
    //se o numero de linha L for maior que o da coluna C, então o valor da célula será 1;
    //se o numero de linha L for menor que o da coluna C, então o valor da célula será -1;

    int i,j, matriz[5][5];

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i==j){
                matriz[i][j] = 0;
            }else if (i>j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = -1;
            }
        }
    }

    cout << "\n";

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if (matriz[i][j] == -1){
                cout << matriz[i][j] << " ";
            }else {
                cout << matriz[i][j] << "  ";
            }

        }
        cout << "\n";
    }



    printf("\n");
    system("pause");

    return 0;
}
