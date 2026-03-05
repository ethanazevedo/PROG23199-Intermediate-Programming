#include <stdio.h>

int guess = 1;
int total = 0;

int main() {


    while (guess != 0){
        printf("Enter a number: ");
        scanf("%d", &guess);

        if (guess == 0){
            printf("You entered zero, exiting the loop.\n");
            printf("Current total: %d\n", total);
            break;

        }
        else {
            printf("You entered: %d\n", guess);
            total += guess;
            printf("Current total: %d\n", total);
        }
    }


    return 0;
}