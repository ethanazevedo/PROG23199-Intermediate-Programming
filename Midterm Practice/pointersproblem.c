#include <stdio.h>

void swap(int *p1, int *p2);

int a = 5, b = 10;

int *p1 = &a;
int *p2 = &b;

int main(void){

    swap(p1, p2);

    return 0;
}

void swap(int *p1, int *p2){

    printf("Before Swap: a = %d, b = %d\n", *p1, *p2);


    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After Swap: a = %d, b = %d\n", *p1, *p2);
}

