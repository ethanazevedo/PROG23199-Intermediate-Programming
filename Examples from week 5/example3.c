#include <stdio.h>
#include <ctype.h>

int main(){

    float i = 145.23f;

    printf("Value is: %f\n", i); //f is float form

    printf("Value is: %.2f\n\n", i); //.2 limits to 2 decimal places


    
    double a = 145.23;

    printf("Value is: %f\n", a); //f is float form

    printf("Value is: %e\n", a); //e is exponential form

    printf("Value is: %g\n", a); //g is automatic form



    int ch;

    ch = getchar(); //getchar reads a single character from input
    printf("You entered: %c with ASCII code %d\n\n", ch, ch);

    while ((ch = getchar()) != '\n') { //reads characters until newline is encountered
        printf("%c -> %d\n", ch, ch);
    }

    printf("\n");
    char ch2 = 'C';
    putchar(ch2); //putchar prints a single character
    printf("\n");

    return 0;
}