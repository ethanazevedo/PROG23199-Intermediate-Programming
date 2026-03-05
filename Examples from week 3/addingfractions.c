#include <stdio.h>

int main() {

    printf("Lets make some fractions!!!: \n");

    int num1, denom1, num2, denom2;
    printf("Enter your first fraction: ");
    scanf("%d/%d", &num1, &denom1);
    printf("First fraction is: %d/%d\n", num1, denom1);


    printf("Enter your second fraction: ");
    scanf("%d/%d", &num2, &denom2);
    printf("Second fraction is: %d/%d\n\n", num2, denom2);

    if (denom1 == 0 || denom2 == 0) {
        printf("Error: Denominator cannot be zero.\n");
        return 1; 
    }
    
    int result_num = (num1 * denom2) + (num2 * denom1);
    int result_denom = denom1 * denom2;

    printf("Your sum is: %d/%d", result_num, result_denom); 

    return 0;
}