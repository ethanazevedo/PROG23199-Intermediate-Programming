#include <stdio.h>


int m, d, y;

char months[12][10] = { "January","February","March","April",
    "May","June","July","August",
    "September","October","November","December" };

int main(void){

    printf("Enter date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);
    printf("Dated this %d day of %s, %d", d, months[m-1], y);

    return 0;
}