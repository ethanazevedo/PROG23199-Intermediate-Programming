#include <stdio.h>

int x = 5, y = 0;
int result;

int main() {

    if (y != 0) {
        if (x != 0) {
            result = x / y;
        }
    }

    else {
        printf("Error: y is equal to 0 \n");
    } 


    return 0;
}