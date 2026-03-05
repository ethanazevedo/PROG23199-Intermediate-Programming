#include <stdio.h>

int main() {

    // (area code) part1-part2/2

     int area_code, part1, part2;

     printf("Enter phone number (xxxxxxxxxx): ");
     scanf("%3d%3d%4d", &area_code, &part1, &part2);

     printf("You entered: (%d) %d-%d\n", area_code, part1, part2);

    return 0;
}