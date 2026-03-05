#include <stdio.h>

typedef enum {
    RED = 1, YELLOW, GREEN
}Light;

int main(void) {

    int number;
    Light option;

    printf("Enter a number (1-3): ");
    scanf("%d", &number);

    option = number;

    switch(option){
        case RED:
        printf("STOP!");
        break;
        case YELLOW:
        printf("Slow down!");
        break;
        case GREEN:
        printf("Go!");
        break;
        default:
        printf("Error: Enter a number between (1-3)");
    }

    return 0;
}
