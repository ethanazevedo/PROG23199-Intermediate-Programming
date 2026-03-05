#include <stdio.h>

int main(){

    int x;
    float y = 5.64f;
    x = y; // x stores 5
    float n = x = y; // n stores 5.0
    printf("x is %d, y is %f and n is %f \n", x, y, n);


    return 0;
}