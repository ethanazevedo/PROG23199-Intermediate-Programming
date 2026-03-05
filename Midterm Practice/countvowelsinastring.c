#include <stdio.h>

int vowelCount(char *String);

int main(void){

    char string1[] = "Hello World!";
    char *p = string1;

    int total = vowelCount(p);
    printf("Total vowels: %d", total);

    return 0;
}

int vowelCount(char *String){

    int count = 0;
    
    while(*String != '\0'){

        if(*String == 'a' || *String == 'e' || *String == 'i' || *String == 'o' || *String == 'u'){
            count += 1;
        }
        String++;
    }

    return count;
}