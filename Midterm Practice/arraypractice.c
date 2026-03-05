#include <stdio.h>



int main(void){


    int array[5] = {1, 4, 5, 6, 7};

    int array2 [3][5] = {{1, 2, 3, 4, 5},
                         {6, 7, 8, 9, 10},
                         {11, 12, 13, 14, 15}};

    int n = array2[2][2];
    printf("array 2: %d", n);

    printf("\n\n%d\n\n", array[1]);

    for(int i=0; i < 5; i++){
        printf("%d ", array[i]);
    }


    int course_num = 23199;
    printf("\n\n\n%d\n", course_num);   // prints the value
    printf("%p\n", &course_num);  // prints the memory address





    int num = 5;

    int *p;
    
    p = &num;
    

    printf("\n\n%p", p);

    printf ("\n\n%d", *p);










    return 0;
}