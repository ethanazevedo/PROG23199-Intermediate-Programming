#include <stdio.h>

void loopString(char *String);

char string1[] = "Hello!";
char *p = string1;

int main(void){


    loopString(p);

    return 0;

}

void loopString(char *String){
    //printf("%s", String);

    while(*String != '\0'){
        printf("%c\n", *String);
        String++;

    }



}