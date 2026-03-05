#include <stdio.h>

int main(void){

    int count = 0;
    char string1[100];

    printf("Enter a string: ");
    scanf("%s", &string1);
    printf("You entered: %s\n", string1);

    char *ptr = string1;

    while (*ptr != '\0'){
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' ){
            count += 1;
        }
        ptr++;
    }

    printf("Number of vowels: %d", count);

    return 0;

}