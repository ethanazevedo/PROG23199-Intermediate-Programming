#include <stdio.h>

int main(){

    int numerator, denominator;

    printf("Enter fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    printf("Your Numerator: %d and your denominator: %d\n", numerator, denominator);

    return 0;
}