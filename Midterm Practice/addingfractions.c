/*Create a program that produces the following out (example user input is provided in pink).

Enter first fraction: 5/6
Enter second fraction: 3/4
The sum is 38/24*/


#include <stdio.h>

int numer1, numer2, denom1, denom2;

int main(void){
    printf("testing");
    
    printf("Enter first fraction: ");
    scanf("%d/%d", &numer1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &numer2, &denom2);

    if (denom1 == 0 || denom2 == 0){
        printf("Cannot have a 0 in the demon!!!");
        return 1;
    }

    int top = (numer1 * denom2) + (numer2 * denom1);
    int bottom = (denom1 * denom2);

    printf("The sum is %d/%d\n", top, bottom);

    
    return 0;

}