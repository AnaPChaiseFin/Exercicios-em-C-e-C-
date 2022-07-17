#include <stdio.h>
#include <stdlib.h>

void main() {

    int A, B;

    A = 2;
    B = 6;

    {
        int A, C;

        A++;
        ++C;
        C = A + ++B;
        B = C++ - A;

        printf("\n A1: %d", A);
        printf("\n A variavel local começou com zero e incrementou mais 1");
        printf("\n C: %d", C);
        printf("\n Faz a operação de 8-1 = 7 e depois vem o incremento do C. Por isso o resultado 9. ");
    }

    printf("\n A2: %d", A);
    printf("\n Esta apenas imprimindo a variavel global");
    printf("\n B: %d", B);
}
