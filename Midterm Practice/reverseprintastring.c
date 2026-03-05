#include <stdio.h>

void printReverse(char *String);

int main(void){

    char string1[] = "Hello!";
    char *p = string1;

    printReverse(p);

    return 0;
}


void printReverse(char *String){

    int count = 0;
    while (*String != '\0'){
        String++;
        count += 1;
        }

    for(int i = 0; i < count; i++){
        printf("%c\n", *String);
        String--;

    }
}