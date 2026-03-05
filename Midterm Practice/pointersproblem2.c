#include <stdio.h>

void max(int *p1, int *p2);

int a = 5, b = 10;

int main(void){

    max(&a, &b);

    return 0;
}

void max(int *p1, int *p2){

    if (*p1 > *p2){
        printf("a is larger: %d\n", *p1);
    }
    else if (*p1 < *p2){
        printf("b is larger: %d\n", *p2);
        printf("lets swapp...\n");
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        printf("a = %d, b = %d", *p1, *p2);
    }

    else{
        printf("They are equal");
    }

}