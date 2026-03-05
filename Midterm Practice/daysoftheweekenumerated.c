#include <stdio.h>

typedef enum{
    SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}Day;

int main(void){

    Day d;
    int n;

    printf("\nEnter a number between 1 and 7: ");
    scanf("%d", &n);
    d = n;
    switch(d){
         case SUNDAY:
            printf("The day is SUNDAY\n");
            break;
        case MONDAY:
            printf("The day is MONDAY\n");
            break;
        case TUESDAY:
            printf("The day is TUESDAY\n");
            break;
        case WEDNESDAY:
            printf("The day is WEDNESDAY\n");
            break;
        case THURSDAY:
            printf("The day is THURSDAY\n");
            break;
        case FRIDAY:
            printf("The day is FRIDAY\n");
            break;
        case SATURDAY:
            printf("The day is SATURDAY\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }
    return 0;
}