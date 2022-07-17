#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Matriz unitaria 5x5
int main(){

    int i,j, matriz[5][5];

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i==j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }

    cout << "\n";

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }



    printf("\n");
    system("pause");

    return 0;
}

