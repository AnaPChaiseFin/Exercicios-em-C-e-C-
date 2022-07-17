#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 2;
    int b = 12 + 23 / ++a;
    printf("\n a1: %d", a);
    a+= 3;
    printf("\n a2: %d", a);
    int c = b % a--;
    printf("\n a3: %d", a);
    float d = b / (float)(a);
    int e = b / (float)(a);
    int f = (e >= d) || ((a == (d + 2)) && ((c + e) > a ));
    int g = ((b * a) < (c * a)) && !(f || (d > e));

    printf("\nb: %d", b);
    printf("\nc: %d", c);
    printf("\nd: %.2f", d);
    printf("\ne: %d", e);
    printf("\nf: %d", f);
    printf("\ng: %d", g);


    return 0;
}
