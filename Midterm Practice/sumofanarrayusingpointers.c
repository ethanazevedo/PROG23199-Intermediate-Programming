#include <stdio.h>

int sum_array(int *ptr, int size);

int array[5] = {1, 5, 7, 3, 9};

int *ptr = array;

int main(void){

    int total = sum_array(ptr, 5);
    printf("\n\nTotal: %d", total);
    return 0;
}

int sum_array(int *ptr, int size){

    int sum = 0;

    printf("Array elements: ");
    for(int i = 0; i < size; i++){
        
        printf("%d", *(ptr + i));
        sum += *(ptr + i);

    }
    return sum;
}