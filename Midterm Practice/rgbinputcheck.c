#include <stdio.h>

    typedef struct{
        int red;
        int green;
        int blue;

    }Color;

int main(void) {

    Color p;

    printf("Enter RGB values (red, blue, green): ");
    scanf("%d,%d,%d", &p.red, &p.green, &p.blue);

    if (p.red < 0 || p.red > 255 || p.green < 0 || p.green > 255 || p.blue < 0 || p.blue > 255 ){
        printf("\nError: Something does not fall in the range...\n");
        return 1;

    }
    else {
        printf("\nRGB: %d, %d, %d", p.red, p.green, p.blue);
    }

    return 0;
}
